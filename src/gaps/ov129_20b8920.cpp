extern "C" unsigned int data_ov129_021188e4[];
extern "C" unsigned int data_ov129_021189d4[];
extern "C" unsigned int data_ov129_021189cc[];
extern "C" unsigned int data_ov129_021189c4[];
extern "C" void *_ZTV7Vec2_32[];
extern "C" int func_ov129_020b9678();
extern "C" bool func_ov129_020bf920(void *p);
extern "C" void func_02043464(void *, int, int);
// gap chunk

extern "C" void func_ov129_020b8920() {
}

extern "C" int func_ov129_020b9210() {
	return 0;
}

extern "C" int func_ov129_020b9634() {
	return 0;
}

extern "C" int func_ov129_020b9678() {
	return 1;
}

extern "C" int func_ov129_020b9680() {
	return 1;
}

extern "C" int func_ov129_020b9688() {
	return 1;
}

extern "C" int func_ov129_020b9690() {
	return 1;
}

extern "C" int func_ov129_020b999c() {
	return 1;
}

extern "C" int func_ov129_020b9cb8() {
	return 2;
}

extern "C" int func_ov129_020bc254(void *p) {
	return *(int *)((char *)p + 0x5c);
}

extern "C" int func_ov129_020bc25c(void *p) {
	return *(int *)((char *)p + 0x58);
}

extern "C" void func_ov129_020bcb84() {
}

extern "C" void func_ov129_020bcb88() {
}

extern "C" void func_ov129_020bcb8c() {
}

extern "C" void func_ov129_020bcb90() {
}

extern "C" int func_ov129_020be074(void *p) {
	return *(int *)((char *)p + 0x58);
}

extern "C" void func_ov129_020c6080() {
}

extern "C" void *func_ov129_020be064(void *p) {
	return (char *)p + 0x28;
}

extern "C" void *func_ov129_020be06c(void *p) {
	return (char *)p + 0x18;
}

extern "C" void *func_ov129_020c17dc(void *p) {
	return (char *)p + 0x40;
}

extern "C" void *func_ov129_020c1884(void *p) {
	return (char *)p + 0x30;
}

extern "C" void *func_ov129_020c188c(void *p) {
	return (char *)p + 0x20;
}


extern "C" void func_ov129_020bcb58(void *p) {
	*(unsigned int *)((char *)p + 0x0) = 0xffffffffu;
}

extern "C" void func_ov129_020bf3a0(void *p) {
	*(int *)((char *)p + 0x20) = 0;
}

extern "C" void func_ov129_020c3098(void *p) {
	*(int *)((char *)p + 0x28) = 0;
}

// ov129 batch 2
// idx setter: p[i<<5 + 8] = v
extern "C" void func_ov129_020c13a8(void *p, int i, int v)
{
	*(int *)((char *)p + (i << 5) + 8) = v;
}

// table getter
extern "C" unsigned int data_ov129_021183a0[];

extern "C" unsigned int func_ov129_020b9200(int idx)
{
	return data_ov129_021183a0[idx];
}

// global store: *data_ov129_02118558 = v
extern "C" unsigned int data_ov129_02118558;

extern "C" void func_ov129_020ba4a8(unsigned int v)
{
	data_ov129_02118558 = v;
}

// array element getter: ((short *)p)[i*0x18 + 0x70]... byte math
extern "C" short func_ov129_020c0150(void *p, int i)
{
	return *(short *)((char *)p + i * 0x18 + 0x70);
}

// zero a global byte
extern "C" unsigned char data_0208b5f8;

extern "C" void func_ov129_020b9fb4()
{
	data_0208b5f8 = 0;
}

// zero global word
extern "C" unsigned int data_ov129_021219ac;

extern "C" void func_ov129_020bbbc0()
{
	data_ov129_021219ac = 0;
}

// flag set via indexed field
extern "C" void func_ov129_020bcbf4(void *p)
{
	int t = *(int *)((char *)p + 0x44);
	*(unsigned char *)((char *)p + t + 0x2a) = 1;
}

// global byte clear/set pair
extern "C" unsigned char data_ov129_021219e0;

extern "C" void func_ov129_020bdb00()
{
	data_ov129_021219e0 = 0;
}

extern "C" void func_ov129_020bdb14()
{
	data_ov129_021219e0 = 1;
}

// linked-list insert: b->f1c = a->f108; a->f108 = b; b->f18 = a
extern "C" void func_ov129_020bf9d0(void *a, void *b)
{
	void *t = *(void **)((char *)a + 0x108);
	*(void **)((char *)b + 0x1c) = t;
	*(void **)((char *)a + 0x108) = b;
	*(void **)((char *)b + 0x18) = a;
}

// two-index byte store + flag
extern "C" void func_ov129_020c1324(void *p, int v, int i)
{
	*(unsigned char *)((char *)p + (i << 5) + 0x1f) = v;
	*(unsigned char *)((char *)p + 0x91) = 1;
}


// field byte test == 1

// ov129 batch 3

extern "C" void func_ov129_020bfe7c(void *p);
extern "C" void func_ov129_020bfe38(void *p);

extern "C" void func_ov129_020c0afc(void *p)
{
	func_ov129_020bfe7c(p);
	func_ov129_020bfe38(p);
}

extern "C" unsigned int data_ov129_02118780[];

extern "C" void func_ov129_020bed5c(void *p)
{
	*(int *)((char *)p + 0x4c) = data_ov129_02118780[0];
	*(int *)((char *)p + 0x50) = data_ov129_02118780[1];
}

extern "C" unsigned int data_ov129_021187e8[];

extern "C" void func_ov129_020bf300(void *p)
{
	*(int *)((char *)p + 0x4c) = data_ov129_021187e8[0];
	*(int *)((char *)p + 0x50) = data_ov129_021187e8[1];
}

extern "C" int func_ov129_020c6068(void *p)
{
	return (*(int *)((char *)p + 8) & 0xff) == 1;
}

extern "C" void func_ov129_020bbbd4(void *p)
{
	data_ov129_021219ac = 0;
	*(int *)((char *)p + 0x10c) = 0;
}

extern "C" void func_ov129_020c13b4(void *p)
{
	unsigned int a = data_ov129_021188e4[0];
	unsigned int b = data_ov129_021188e4[1];
	*(unsigned int *)p = a;
	*(unsigned int *)((char *)p + 4) = b;
}

extern "C" void func_ov129_020c42ac(void *p)
{
	unsigned int a = data_ov129_021189d4[0];
	unsigned int b = data_ov129_021189d4[1];
	*(unsigned int *)p = a;
	*(unsigned int *)((char *)p + 4) = b;
}

extern "C" void func_ov129_020c4520(void *p)
{
	unsigned int a = data_ov129_021189cc[0];
	unsigned int b = data_ov129_021189cc[1];
	*(unsigned int *)p = a;
	*(unsigned int *)((char *)p + 4) = b;
}

extern "C" void func_ov129_020c4764(void *p)
{
	unsigned int a = data_ov129_021189c4[0];
	unsigned int b = data_ov129_021189c4[1];
	*(unsigned int *)p = a;
	*(unsigned int *)((char *)p + 4) = b;
}

extern "C" void func_ov129_020c0210(void *p, unsigned char v)
{
	for (int i = 0; i < 4; i++) {
		*(unsigned char *)p = v;
		p = (char *)p + 0x18;
	}
}

extern "C" int func_ov129_020b9cc0()
{
	return func_ov129_020b9678() != false;
}

extern "C" void func_ov129_020bba38(void *p)
{
	func_ov129_020bf920(p);
	func_02043464((char *)p + 0x10c, 0, 1);
}

extern "C" void func_ov129_020bbfb0(void *d, void *s)
{
	*(void **)d = (void *)&_ZTV7Vec2_32[2];
	*(int *)((char *)d + 4) = *(int *)((char *)s + 0x2c);
	*(int *)((char *)d + 8) = *(int *)((char *)s + 0x30);
}

extern "C" void func_ov129_020bbfd0(void *d, void *s)
{
	*(void **)d = (void *)&_ZTV7Vec2_32[2];
	*(int *)((char *)d + 4) = *(int *)((char *)s + 0x14);
	*(int *)((char *)d + 8) = *(int *)((char *)s + 0x18);
}

extern "C" void func_ov129_020bc020(void *d, void *s)
{
	*(void **)d = (void *)&_ZTV7Vec2_32[2];
	*(int *)((char *)d + 4) = *(int *)((char *)s + 0x20);
	*(int *)((char *)d + 8) = *(int *)((char *)s + 0x24);
}
