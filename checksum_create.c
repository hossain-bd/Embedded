#include<stdio.h>

int main() {
    unsigned char mydata[]={0x25,0x62,0x3F,0x52};
    unsigned char sum=0;
    unsigned char x;
    unsigned char chksumbyte;
    
    for (x=0;x<4;x++) {
        sum=sum+mydata[x];
    }
    chksumbyte=~sum+1;        // two's complement;
    printf("The calculated checksum byte is: '%c', checksumbyte");
    return 0;
}
