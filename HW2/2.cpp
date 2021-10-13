#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c;		//宣告浮點數
	scanf("%f", &a);	//輸入
	scanf("%f", &b);
	scanf("%f", &c);
	printf("長: %f\n", a);		//輸出
	printf("寬: %f\n", b);
	printf("高: %f\n", c);
	printf("周長: %f\n", 4*a+4*b+4*c);
	printf("表面積: %f\n", 2*a*b+2*b*c+2*a*c);
	printf("體積: %f\n", a*b*c);

	system("pause");
	return 0;
}