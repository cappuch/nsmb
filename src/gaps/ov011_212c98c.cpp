// gap chunk

extern "C" int func_ov011_0212cc9c(void *p) {
	return *(int *)((char *)p + 0x30);
}

extern "C" void func_ov011_0212cca4(void *p, int v) {
	*(int *)((char *)p + 0x30) = v;
}

extern "C" int func_ov011_0212ccbc(void *p) {
	return *(int *)((char *)p + 0x2c);
}
