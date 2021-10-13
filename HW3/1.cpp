#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int a,b;									//宣告薪水a 結果b
	printf("Enter the value of monthly salary : ");		//輸出句子
	scanf("%d", &a);									//輸入薪水

	if (a <= 30000)										//條件
		b = 13.5*a;
	else if (a >= 30001 && a <= 50000)
		b = 14 * a;
	else if (a >= 50001 && a <= 70000)
		b = 14.5*a;
	else
		b = 16 * a;
	


	printf("Your annual salary is $%d\n", b);		//輸出結果

	system("pause");
	return 0;

}