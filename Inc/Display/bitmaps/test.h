const uint8_t bmp_test[] = {
	0x0, 0x0, 0x0, 0x4, 0x8a, 0x51, 0x52, 0x53, 0x23, 0xd5, 0x50, 0x99, 0x8b, 0x11, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x1, 0xe0, 0x1, 0x30, 0xb, 0x20, 0x9, 0x80, 0x3f, 0x80, 0x0, 0x0 
}; 

const Bitmap Bitmap_test = {
	(uint8_t *)bmp_test,	//buffer
	16,	//width
	16	//height
};