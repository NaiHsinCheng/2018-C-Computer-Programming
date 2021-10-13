#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Differential_1(int);
void Differential_2(int);
void Integral_1(int, int);
void Integral_2(int, int);

void y_line(double f);
void x_lineup(int);
void x_linedown(int);

double a, b, c, d, e,f;		//6�ӫY��
int main()
{
	int x1, x2;		//x�b�d��
	int p;			//���Ix��
	printf("�п�J6�ӫY��:");
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	printf("�п�J�@��x���϶�:");
	scanf("%d %d", &x1, &x2);
	printf("�п�J�ҨD���I��x��:");
	scanf("%d", &p);


	/*double y, x;
	y = a * pow(x,5) + b * pow(x, 4) + c * pow(x, 3) + d * pow(x, 2) + e * x + f;*/
		
	
	x_lineup(p);
	y_line(f);		//y�b
	x_linedown(p);
	printf("\n");


	Differential_1(p);
	Differential_2(p);
	Integral_1(x1, x2);
	Integral_2(x1, x2);

	system("pause");
	return 0;
}
//�Ĥ@�Ө禡
void Differential_1(int p) {
	double pp;
	printf("�ϥξɼƷL���p�⪺���G:\n");
	for (double i = 0.1; i >= 0.01; i -= 0.01)
	{
		double m = p + i;
		double y1 = a * pow(p, 5) + b * pow(p, 4) + c * pow(p, 3) + d * pow(p, 2) + e * p + f;
		double y2 = a * pow(m, 5) + b * pow(m, 4) + c * pow(m, 3) + d * pow(m, 2) + e * m + f;
		double pp = (y2 - y1) / i;
		printf("x�ܤƶq=%.6lf�A���G��: %.6lf\n", i, pp);
	}
}
//�ĤG�Ө禡
void Differential_2(int x) {
	double y = 5 * a * pow(x, 4) + 4*b * pow(x, 3) + 3*c * pow(x, 2) + 2*d *x + e;
	printf("�ϥηL���p�⪺���G��:%lf\n",y);
}
//�ĤT�Ө禡
void Integral_1(int x1, int x2) {
	printf("�ϥξ��ҩM�p�⪺���G:\n");
	
	for (double i = 0.1; i >= 0.01; i -= 0.01)
	{
		double area0,count0=0;
		for (double j = x1; j <= x2-i; j += i)
		{
			double y = a * pow(j, 5) + b * pow(j, 4) + c * pow(j, 3) + d * pow(j, 2) + e * j + f;
			area0 = i * y;
			count0 += area0;
		}
		double area1, count1 = 0;
		for (double j = x1+i; j <= x2 ; j += i)
		{
			double y = a * pow(j, 5) + b * pow(j, 4) + c * pow(j, 3) + d * pow(j, 2) + e * j + f;
			area1 = i * y;
			count1 += area1;
		}
		double count = (count0 + count1) / 2;
		printf("x�ܤƶq=%.6f�A���G��: %.6lf\n", i, count);
	}
}
//�ĥ|�Ө禡
void Integral_2(int x1, int x2) {
	double y1 = a/6 * pow(x1, 6) + b/5 * pow(x1, 5) + c/4 * pow(x1, 4) + d/3 * pow(x1, 3) + e/2 * pow(x1,2) + f*x1;
	double y2 = a / 6 * pow(x2, 6) + b / 5 * pow(x2, 5) + c / 4 * pow(x2, 4) + d / 3 * pow(x2, 3) + e / 2 * pow(x2, 2) + f * x2;
	printf("�ϥοn���p�⪺���G��:%lf\n",y2-y1);
}


//�Ly�b�禡
void y_line(double f)
{
	for (int i = -39; i <= 40; i++)
	{
		if (i == (int)f)
			printf("*");
		else if (i == 0)
			printf("0");
		else if (i == 40)
			printf("Y");
		else if (i % 5 == 0)
			printf("+");
		else
			printf("-");
	}
	printf("\n");
}

//�Lx�b�W���I
void x_lineup(int p) {
	for (int j = -10; j <= -1; j++)					//y�b�W�C
	{
		double y = a * pow(j, 5) + b * pow(j, 4) + c * pow(j, 3) + d * pow(j, 2) + e * j + f;
		for (int i = -39; i <= 40; i++)		//y�b�W��
		{
			if (j == -10)
			{
				if (i == -1)
					printf("-");
				else if (i == 0)
					printf("1");
				else if (i == 1)
					printf("0");
				else
					printf(" ");
			}
			else if (j == -5)
			{
				if (i == -1)
					printf("-");
				else if (i == 0)
					printf("5");
				else
					printf(" ");
			}
			else if (i == 0)
				printf("|");
			else if (j == p)
			{
				if ((int)y != 0)
				{ 
					if (i == (int)y - 7)
						printf("(");
					else if (i == (int)y - 6)
						printf("%d", p/10);
					else if (i == (int)y - 5)
						printf("%d", p%10);
					else if (i == (int)y - 4)
						printf(",");
					else if (i == (int)y - 3)
						printf("%d", (int)y/10);
					else if (i == (int)y - 2)
						printf("%d", (int)y%10);
					else if (i == (int)y - 1)
						printf(")");
					else if (i == (int)y)
						printf("P");
					else
						printf(" ");
				}
				else
					printf(" ");
			}
			else if (i == (int)y)
					printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
//�Lx�b�U���I
void x_linedown(int p) {
for (int j = 1; j <= 10; j++)					//y�b�U�C
{
	double y = a * pow(j, 5) + b * pow(j, 4) + c * pow(j, 3) + d * pow(j, 2) + e * j + f;
	for (int i = -39; i <= 40; i++)		//y�b�U��
	{
		if (j == 5)
		{
			if (i == 0)
				printf("5");
			else
				printf(" ");
		}
		else if (j == 10)
		{
			if (i == 0)
				printf("1");
			else if (i == 1)
				printf("0");
			else
				printf(" ");
		}
		else if (i == 0)
			printf("|");
		else if (j == p)
		{
			if ((int)y != 0)
			{
				if (i == (int)y - 7)
					printf("(");
				else if (i == (int)y - 6)
					printf("%d", p / 10);
				else if (i == (int)y - 5)
					printf("%d", p % 10);
				else if (i == (int)y - 4)
					printf(",");
				else if (i == (int)y - 3)
					printf("%d", (int)y / 10);
				else if (i == (int)y - 2)
					printf("%d", (int)y % 10);
				else if (i == (int)y - 1)
					printf(")");
				else if (i == (int)y)
					printf("P");
				else
					printf(" ");
			}
			else
				printf(" ");
		}
		else if (i == (int)y)
			printf("*");
		else
			printf(" ");
	}
	printf("\n");
}
}