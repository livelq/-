#include<stdio.h>
#include<math.h>
int main()
{
	char g;
	printf("请输入一个小写字母：\n");
	scanf("%c",g);
	g=g-32;
	printf("大写字母是:%c",g);
}
