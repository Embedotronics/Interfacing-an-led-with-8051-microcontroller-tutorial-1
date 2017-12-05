#include<reg51.h>
sbit m=P2^1;
void main(void)
{
	unsigned int i;
	P2=0x00;
	while(1)
	{
		m=1;
	for(i=0;i<30000;i++);
		m=0;
		for(i=0;i<30000;i++);
	}
}