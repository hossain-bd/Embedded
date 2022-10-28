

void main(void)
{
unsigned char mydata[]={0x25,0x62,0x3F,0x52};
unsigned char sum=0;
unsigned char x;
unsigned char chksumbyte;
for (x=0;x<4;x++)
{
P2=mydata[x];
sum=sum+mydata[x];
P1=sum;
}
chksumbyte=~sum+1;
P1=chksumbyte;
}
