#include "playermodel.hpp"
#include "../AAA.hpp"

extern u16 data_ov000_020caa30;
extern u16 data_ov000_020caa2c;
extern "C" void func_ov011_0212d154(PlayerModel*, Mat4x3*, Vec3_32*, i8, BOOL, u32, u32, BOOL);
extern "C" bool func_ov011_0212db00(PlayerModel*, u8, u32);

enum {
	pl_map_file_id = 1894 - 131
};

enum pl_map {
	pl_map_run,
	pl_map_wait,
	pl_map_walk,
	pl_map_pipe_pose,
	pl_map_course_in,
	pl_map_coin_comp,
	pl_map_L_run,
	pl_map_L_wait,
	pl_map_L_walk,
	pl_map_small_wait
};


const u32 WmPlayerModel::charaRunAnimIDs[2] = {
	pl_map_run,
	pl_map_L_run
};

const u32 WmPlayerModel::charaWalkAnimIDs[2] = {
	pl_map_walk,
	pl_map_L_walk
};

const u32 WmPlayerModel::charaWaitAnimIDs[2] = {
	pl_map_wait,
	pl_map_L_wait
};

const WmPlayerModel::Config WmPlayerModel::configTbl[P_MAX] = {
	{ 1, 0 }, // Small
	{ 0, 0 }, // Super
	{ 0, 1 }, // Fire
	{ 1, 0 }, // Mini
	{ 0, 0 } // Shell
};

const WmPlayerModel::Anim WmPlayerModel::animTbl[A_MAX] = {
	// Wait
	{ pl_map_file_id, pl_map_small_wait, _FixedFlt(1.0), FrameCtrl::Looping,  10, 0 },
	// Walk
	{ pl_map_file_id, pl_map_walk,       _FixedFlt(1.0), FrameCtrl::Looping,  5,  0 },
	// Run
	{ pl_map_file_id, pl_map_run,        _FixedFlt(1.0), FrameCtrl::Looping,  5,  0 },
	// PipePose
	{ pl_map_file_id, pl_map_pipe_pose,  _FixedFlt(1.0), FrameCtrl::Looping,  0,  0 },
	// CourseIn
	{ pl_map_file_id, pl_map_course_in,  _FixedFlt(1.0), FrameCtrl::Standard, 0,  0 },
	// CoinComp
	{ pl_map_file_id, pl_map_coin_comp,  _FixedFlt(1.0), FrameCtrl::Standard, 0,  0 }
};


WmPlayerModel::WmPlayerModel() {}

WmPlayerModel::~WmPlayerModel() {}


bool WmPlayerModel::create(u8 playerID, u8 powerup, u32 animID) {

	if (!func_ov011_0212db00(&model, playerID, pl_map_file_id))
		return false;

	this->playerID = playerID;

	switch (powerup) {

	case POWERUP_SMALL:
	case POWERUP_SUPER:
	case POWERUP_FIRE:
		this->powerup = powerup;
		break;

	case POWERUP_SHELL:
		this->powerup = P_Shell;
		break;

	case POWERUP_MINI:
	case POWERUP_MEGA:
	default:
		this->powerup = P_Small;
		break;

	}

	config = configTbl + this->powerup;
	modelState = config->modelState;
	model.modelState = modelState;
	model.flags &= ~0x4;
	this->animID = -1;

	init(animID, FALSE);
	return true;

}

void WmPlayerModel::render(Mat4x3* mtx, Vec3_32* scale) {
	if (this->powerup == P_Shell) {
		this->model.flags |= F_RenderShell;
	} else {
		this->model.flags &= ~F_RenderShell;
	}
	func_ov011_0212d154(&this->model, mtx, scale, this->config->paletteID, false,
		data_ov000_020caa30, data_ov000_020caa2c, false);
}

void WmPlayerModel::update(u8 moveState) {

	if (moveState == 0)
		model.update();

}

void WmPlayerModel::init(u32 animID, BOOL resume) {

	this->animID = animID;

	const Anim& anim = animTbl[this->animID];
	u32 resIdx = anim.animID;
	u16 startFrame;

	if (!resume) {
		if (anim.speed < 0) {
			startFrame = model.getAnimationFrameCount() - 1;
		} else {
			startFrame = 0;
		}
	} else {
		startFrame = model.getCurrentAnimationFrame();
	}

	switch (this->animID) {

	case A_Wait:
		if (modelState != 1) {
			resIdx = charaWaitAnimIDs[playerID];
		}
		break;

	case A_Walk:
		resIdx = charaWalkAnimIDs[playerID];
		break;

	case A_Run:
		resIdx = charaRunAnimIDs[playerID];
		break;

	}

	void* animFile = FS::Cache::getFile(anim.fileID);
	if (animFile != nullptr) {
		void* animRes = Ns_3dGetAnimation(scast<Ns3dFileHeader*>(animFile), resIdx);
		if (animRes != nullptr) {
			model.setBodyAnimation(animRes, 0, anim.type, anim.speed, startFrame);
		}
	}

	initHead(anim.headAnimID);

}

void WmPlayerModel::initHead(u32 animID) {

	if (headAnimID == animID)
		return;

	headAnimID = animID;

	const PlayerHeadAnimation& headAnim = model.headAnimations[playerID][headAnimID];

	void* animFile = FS::Cache::getFile(model.headPatternFileIDs[playerID]);
	if (animFile != nullptr) {
		void* animRes = Ns_3dGetAnimation(scast<Ns3dFileHeader*>(animFile), headAnim.animID);
		if (animRes != nullptr) {
			model.setHeadAnimation(animRes, headAnim.type, headAnim.speed, headAnim.startFrame);
		}
	}

}


bool WmPlayerModel::loadResources() {
	return false;
}
