#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b;			//放a 锣传挡狦b
	char ch;			//じch放才腹
	printf("Enter the Temperature: ");
	scanf("%f%c", &a, &ch);			//块放

	if (ch == 'f' || ch == 'F') {	//狦ch琌f┪F 璶р地ん放锣传Θ尼ん放
		b = (a - 32) * 5 / 9;
		printf("Celsius: %.4fC\n",b);
	}
	else if (ch == 'c' || ch == 'C') {		//狦ch琌c┪C 璶р尼ん放锣传Θ地ん放
		b = (a * 9 /5 ) + 32;
		printf("Fahrenheit: %.3fF\n",b);
	}
	else
		printf("ERROR!\n");

	system("pause");
	return 0;

}