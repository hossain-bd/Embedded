/**
	Packed BCD means the two digit decimal or hex number is represented by a single 8 bit binary number.
	Unpacked BCD means single digit decimal or hex number is represented by a nibble.
**/
#include<stdio.h>

int main()
{
	unsigned char x, y, z, mybyte = 0x29;
	x = mybyte & 0x0F;      // mask lower 4 bits. Lower digit of hex number (9) is converted here as unpacked BCD.
	printf("Ascii for Lower 8 bits is '%c' \n", x | 0x30);
	
	y = mybyte & 0xF0;      // mask upper 4 bits. Higher digit of hex number (2) is converted here as unpacked BCD.
	y = y >> 4;
	printf("Ascii for Higher 8 bits is '%c'", y | 0x30);
	return 0;
}
