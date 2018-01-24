#include<stdio.h>
int main(int argc,char*argv[])
{
	int count;
	printf("The command line has %d arguements:",argc-1);
	for(count=1;count<argc;count++)
	printf("%d:%s",count,argv[count]);
	return 0;
 } 
