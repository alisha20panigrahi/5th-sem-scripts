#include<stdio.h>
typedef unsigned char BYTE;
int main()
{
	unsigned int value = 0x11223344;
	BYTE a, b, c, d;
	a = (value & 0xFF);
	b = ((value >>8) & 0xFF);
	c = ((value >> 16) & 0xFF);
	d = ((value >> 24) & 0xFF);
	
	printf("last byte = %02X\n",a);
	
	printf("first byte =%02X\n",d);

return 0;
}
 
 
