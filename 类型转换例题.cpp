#include<stdio.h>
int main(void)
{
	int i=5;
	float a=242.15;
	char d='B';
	i=a;
	d=i;
	printf("d=%c,d=%d",d,d);
	
	return 0;
}
