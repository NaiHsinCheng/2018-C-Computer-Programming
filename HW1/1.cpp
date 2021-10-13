#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c;					//宣告字元c
	scanf("%c", &c);		//輸入字元
	printf("\t      %c \n", c);			//輸出
	printf("\t     %c%c%c \n", c, c, c);
	printf("\t  %c%c%c%c%c%c%c%c%c \n", c, c, c, c, c, c, c, c, c);
	printf("\t    %c%c%c%c%c \n", c, c, c, c, c);
	printf("\t  %c%c%c%c%c%c%c%c%c \n", c, c, c, c, c, c, c, c, c);
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c \n", c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\t    %c%c%c%c%c \n", c, c, c, c, c);
	printf("\t    %c%c%c%c%c \n", c, c, c, c, c);

	system("pause");		//按任意建
	return 0;
}