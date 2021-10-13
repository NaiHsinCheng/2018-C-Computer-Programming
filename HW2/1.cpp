#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d;			//宣告整數變數
	scanf("%d", &a);		//輸入整數a
	scanf("%d", &b);		//輸入整數b
	scanf("%d", &c);		//輸入整數c
	scanf("%d", &d);		//輸入整數d

	printf("Num1: %d\n", a);	//輸出abcd
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