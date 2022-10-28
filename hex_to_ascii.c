#include<stdio.h>

int main()
{
	unsigned char packed_bcd, x = '4', y = '7';
	x = x & 0x0F;       // mask lower 4 bits
	x = x << 4;         // shift left to 4 bits to make the upper BCD digit
	
	y = y & 0x0F;       // mask lower 4 bits
	
	packed_bcd = x | y; // create the packed BCD number
	
	printf("The packed BCD: '%c' \n", packed_bcd);
	return 0;
}
