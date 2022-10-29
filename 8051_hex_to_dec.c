#include <stdio.h>

void main(void) {
  unsigned char x,binbyte,d1,d2,d3;
  
  binbyte=0xFD;
  x=binbyte/10;   // get the upper part of binbyte in x
  d1=binbyte%10;  // get the lower 1B of binbyte in d1
  d2=x%10;        // get the 2nd 1B of binbyte in d2
  d3=x/10;        // get the rest in d3
  P0=d1;
  P1=d2;
  P2=d3;
}
