#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c;		//�ŧi�B�I��
	scanf("%f", &a);	//��J
	scanf("%f", &b);
	scanf("%f", &c);
	printf("��: %f\n", a);		//��X
	printf("�e: %f\n", b);
	printf("��: %f\n", c);
	printf("�P��: %f\n", 4*a+4*b+4*c);
	printf("���n: %f\n", 2*a*b+2*b*c+2*a*c);
	printf("��n: %f\n", a*b*c);

	system("pause");
	return 0;
}