#include<stdio.h>

int main()
{
	unsigned char x, y, z, mybyte = 0x29;
	x = mybyte & 0x0F;      //mask lower 4 bits
	printf("Ascii for Lower 8 bits is '%c' \n", x | 0x30);
	
	y = mybyte & 0xF0;      // mask upper 4 bits
	y = y >> 4;
	printf("Ascii for Higher 8 bits is '%c'", y | 0x30);
	return 0;
}
