/**
Idea here in this algorithm is to find binary representation of the number by checking every bit of the number. Since we know that any number is stored 
as binary in the computer system, so by checking every bit we will be able to find the required binary representation.
Steps:

Run a for loop from left to right in the number i.e. from the most significant bit to the least significant bit.
Check whether the bit is 0 or 1, we do so by taking 'bitwise and' of mask and num, if it is non-zero then current bit is 1 else the current bit is 0.
Print the bit after every iteration to get binary representation of the number.

**/

#include <stdio.h>

// this method will print all the 32 bits of a number
void decimalToBinary(int num) {
    // assuming 32-bit integer
    for (int i = 31; i >= 0; i--) {
        
        // calculate bitmask to check whether
        // ith bit of num is set or not
        int mask = (1 << i);  	   // masking the MSB
        
        // ith bit of num is set 
        if (num & mask)            // 
           printf("1");
        // ith bit of num is not set   
        else 
           printf("0");
    }
}

int main() {
   int num = 5;
   decimalToBinary(num);
   return 0;
}
