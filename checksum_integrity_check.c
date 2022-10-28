#include<stdio.h>

void main(void) {
    unsigned char mydata[]={0x25,0x62,0x3F,0x52,0xE8};
    unsigned char chksum=0;
    unsigned char x;
    
    for (x=0;x<5;x++)
        chksum=chksum+mydata[x];
    if (chksum==0)
        printf("Data is not corrupted.");
    else
        printf("Data is corrupted !!!.");
}
