#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int a,b;									//�ŧi�~��a ���Gb
	printf("Enter the value of monthly salary : ");		//��X�y�l
	scanf("%d", &a);									//��J�~��

	if (a <= 30000)										//����
		b = 13.5*a;
	else if (a >= 30001 && a <= 50000)
		b = 14 * a;
	else if (a >= 50001 && a <= 70000)
		b = 14.5*a;
	else
		b = 16 * a;
	


	printf("Your annual salary is $%d\n", b);		//��X���G

	system("pause");
	return 0;

}