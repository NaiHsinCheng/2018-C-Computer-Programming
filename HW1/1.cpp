#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c;					//�ŧi�r��c
	scanf("%c", &c);		//��J�r��
	printf("\t      %c \n", c);			//��X
	printf("\t     %c%c%c \n", c, c, c);
	printf("\t  %c%c%c%c%c%c%c%c%c \n", c, c, c, c, c, c, c, c, c);
	printf("\t    %c%c%c%c%c \n", c, c, c, c, c);
	printf("\t  %c%c%c%c%c%c%c%c%c \n", c, c, c, c, c, c, c, c, c);
	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c \n", c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\t    %c%c%c%c%c \n", c, c, c, c, c);
	printf("\t    %c%c%c%c%c \n", c, c, c, c, c);

	system("pause");		//�����N��
	return 0;
}