#include <stdio.h>


/**
Step 1 − Find XOR of a and b i.e. a^b and store it in the result variable.
Step 2 − Check if {(a & b) << 1} == 0
Step 2.1 − If it is equal to 0, then print the result, it is the final result.
Step 2.2 − If it is not equal to 0, then go to step 1, with a = {(a & b) << 1} and b = result.
**/


int addNumbers(int a, int b) {
    int result = a^b;            // perform bitwise addition
    int carry = (a & b) << 1;    // check if the addtion has a carry
    if (carry == 0)              
        return result;
    else
        addNumbers(carry, result);  // if there carry perfort bitwise addition again
}
int main() {
    int a = -54, b = 897;
    printf("The sum of %d and %d using bitwise adding is %d", a, b, addNumbers(a, b));
    return 0;
}
