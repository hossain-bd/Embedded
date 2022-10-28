/**
The truth table for the half subtractor is given below. 

X     Y     Diff     Borrow
0     0     0     0
0     1     1     1
1     0     1     0
1     1     0     0
From the above table one can draw the Karnaugh map for “difference” and “borrow”.
So, Logic equations are: 

    Difference   = y ⊕ x
    Borrow = x' . y 
 **/

#include<stdio.h>

int subtract(int x, int y)
{
	// Iterate till there is no borrow
	while (y != 0)
	{
		int borrow = (~x) & y;        // Find the borrow

		// Subtraction of bits of x
		// and y where at least one
		// of the bits is not set
		x = x ^ y;                    // Find the difference

		// Borrow is shifted by one so that subtracting it from x gives the required sum
		y = borrow << 1;
	}
	return x;
}

// Driver Code
int main()
{
	int x = 9, y = -63;
	printf("x - y is %d", subtract(x, y));
	return 0;
}
