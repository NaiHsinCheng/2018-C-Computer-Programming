#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d;			//�ŧi����ܼ�
	scanf("%d", &a);		//��J���a
	scanf("%d", &b);		//��J���b
	scanf("%d", &c);		//��J���c
	scanf("%d", &d);		//��J���d

	printf("Num1: %d\n", a);	//��Xabcd
	printf("Num2: %d\n", b);
	printf("Num3: %d\n", c);
	printf("Num4: %d\n", d);
	
	printf("%d + %d - %d * %d = %d \n", a, b, c, d, a + b - c * d);
	printf("%d + %d * %d - %d = %d \n", a, b, c, d, a + b * c - d);
	printf("%d - %d + %d * %d = %d \n", a, b, c, d, a - b + c * d);
	printf("%d - %d * %d + %d = %d \n", a, b, c, d, a - b * c + d);
	printf("%d * %d - %d + %d = %d \n", a, b, c, d, a * b - c + d);
	printf("%d * %d + %d - %d = %d \n", a, b, c, d, a * b + c - d);
	
	system("pause");
	return 0;
}