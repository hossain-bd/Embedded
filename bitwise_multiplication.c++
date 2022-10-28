#include <iostream>

int multiplyTwoNumbers(int a, int b) {
    if (a<0 && b<0) {       // if both numbers are negetive, convert them to positive
        a = a*(-1);
        b = b*(-1);
    }
    if (a>0 && b<0) {       // if the 2nd number is negetive, convert it to positive and 1t number to negetive
        a = a*(-1);
        b = b*(-1);
    }
    int result = 0;
    
    /**
    - Write a loop that iterates till the second number becomes 0.
    - If the second number is odd, then add the first number to the result.
    - Left shift first number by 1 bit.
    - Right shift second number by 1 bit.
    **/
    while (b > 0) {     // loop breaks when b==0
       if (b & 1) {     // b is odd if bitwise and operation result has 1 at the LSB position
          result += a;  // add the first number to the result
          }
       a = a << 1;      // left shift 1st number by 1 bit
       b = b >> 1;      // right shift 2nd number by 1 bit
    }
    return result;
}
int main() {
   std::cout << multiplyTwoNumbers(-75, 4) << std::endl;
   std::cout << multiplyTwoNumbers(90, 9) << std::endl;
   std::cout << multiplyTwoNumbers(83, 66) << std::endl;
   return 0;
}
