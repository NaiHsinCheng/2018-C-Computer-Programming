#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b;			//�ŧi�ū�a �ഫ���Gb
	char ch;			//�ŧi�r��ch�N��ūײŸ�
	printf("Enter the Temperature: ");
	scanf("%f%c", &a, &ch);			//��J�ū�

	if (ch == 'f' || ch == 'F') {	//�p�Gch�Of��F �N��n��ؤ�ū��ഫ�����ū�
		b = (a - 32) * 5 / 9;
		printf("Celsius: %.4fC\n",b);
	}
	else if (ch == 'c' || ch == 'C') {		//�p�Gch�Oc��C �N��n�����ū��ഫ���ؤ�ū�
		b = (a * 9 /5 ) + 32;
		printf("Fahrenheit: %.3fF\n",b);
	}
	else
		printf("ERROR!\n");

	system("pause");
	return 0;

}