#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	double PI = 2 * acos(0.0);
	double a, b, c, d, e;		//5�ӫY��
	int w, z;		//x�b�d��
	int p;			//���Ix��
	printf("�п�J5�ӫY��:");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	printf("�п�Jx�b�d��:");
	scanf("%d %d", &w, &z);
	printf("�п�J�ҨD���I��x��:");
	scanf("%d", &p);
	//�ײv
	double y1;		//���I�ײv
	int x = p;
	y1 = a * (-b)* PI / 30 * sin(b*PI / 30 * x) + c * (d*PI / 30)*cos(d*PI / 30 * x);



	printf("��ڤ��u�ײv:%lf\n", y1);


	// y�b�W�Ʀr
	int y3 = -35;	//y�b�W�Ʀr
	for (int j = 1; j <= 15; j++)
	{
		if (j == 1 || j == 10)
		{
			printf("   %3d", y3);
		}
		else if (j == 7)
		{
			printf(" %3d", y3);
		}
		else
		{
			printf("  %3d", y3);
		}
		y3 = y3 + 5;
	}
	printf("\n");


	double y4 = (a * cos(b*PI / 30 * w) + c * sin(d*PI / 30 * w) + e);	//xy�b���y��
	//y�b
	for (int i = -39; i <= -1; i++)
	{
		if (i == (int)y4)
			printf("*");
		else if (i == -1)
			printf("%3d", w);
		else if (i % 5 == 0)
			printf("+");
		else
			printf("-");
	}
	for (int i = 2; i <= 40; i++)
	{
		if (i == (int)y4)
			printf("*");
		else if (i == 40)
			printf("Y");
		else if (i % 5 == 0)
			printf("+");
		else
			printf("-");
	}
	printf("\n");


	//x�b��ߪ��u

	double y2 = (a * cos(b*PI / 30 * p) + c * sin(d*PI / 30 * p) + e);	//���Iy��
	int k = 1;
	for (int x = w + 1; x <= z; x++)			//x�b�d��C�@���@��
	{
		int q, r = x, count = 0;				//��|�M�Ʀr���C���
		do {
			q = r / 10;				//��x�b���X���
			r = q;
			count++;
		} while (r != 0);

		double y = (a * cos(b*PI / 30 * x) + c * sin(d*PI / 30 * x) + e);

		int cc = 0;
		for (int m = -39; m <= 40; m++)		//�C��ťհj��
		{

			if (k % 5 == 0)		//���Ʀr���C
			{
				if (m == 0)				//�bx�b�W
					printf("%d", x);
				else if (m < 0) {		//�bx�b����
					if (m == (int)y)
					{
						if (x != p)
							printf("*");
						else if (x == p)
							printf("P (%d,%d)", x, (int)y2);
					}
					else if (m == (int)y2 && x != p && x >= p - 5 && x <= p + 5 && (int)y1 == 0)
					{
						printf("|");
					}
					else {
						for (int j = (-5); j <= 5; j++)
						{
							if (m == (int)y2 + j && (y1 > 10 || y1 < -10) && x == p)
								printf("-");
						}
						for (int j = (-5); j <= 5; j++)
						{
							if (m == (int)y2 + 2 * j && x != p && x == (p + j) && ((int)y1 > 0 && y1 <= 10))
								printf("\\");
						}
						for (int j = 5; j >= (-5); j--)
						{
							if (m == (int)y2 + 2 * j && x != p && x == (p - j) && (y1 >= -10 && (int)y1 < 0))
								printf("/");
						}
						printf(" ");
					}

				}
				else
				{
					if (m + count - 1 == (int)y)
					{
						if (x != p)
							printf("*");
						else if (x == p)
							printf("P (%d,%d)", x, (int)y2);
					}
					else if (m + count - 1 == (int)y2 && x != p && x >= p - 5 && x <= p + 5 && (int)y1 == 0)
						printf("|");

					else {
						for (int j = (-5); j <= 5; j++)
						{
							if (m + count - 1 == (int)y2 + j && (y1 > 10 || y1 < -10) && x == p)
								printf("-");
						}
						for (int j = (-5); j <= 5; j++)
						{
							if (m + count - 1 == (int)y2 + 2 * j && x != p && x == (p + j) && ((int)y1 > 0 && y1 <= 10))
								printf("\\");
						}
						for (int j = 5; j >= (-5); j--)
						{
							if (m + count - 1 == (int)y2 + 2 * j && x != p && x == (p - j) && (y1 >= -10 && (int)y1 < 0))
								printf("/");
						}
						printf(" ");
					}
				}
			}
			else
			{
				if (m == 0)
					printf("|");
				else if (m == (int)y)
				{
					if (x != p)
						printf("*");
					else if (x == p)
						printf("P (%d,%d)", x, (int)y2);
				}
				else if (m == (int)y2 && x != p && x >= p - 5 && x <= p + 5 && (int)y1 == 0)
					printf("|");
				else {
					for (int j = (-5); j <= 5; j++)
					{
						if (m + count - 1 == (int)y2 + j && (y1 > 10 || y1 < -10) && x == p)
							printf("-");
					}
					for (int j = (-5); j <= 5; j++)
					{
						if (m == (int)y2 + 2 * j && x != p && x == (p + j) && ((int)y1 > 0 && y1 <= 10))
							printf("\\");
					}
					for (int j = 5; j >= (-5); j--)
					{
						if (m == (int)y2 + 2 * j && x != p && x == (p - j) && (y1 >= -10 && (int)y1 < 0))
							printf("/");
					}
					printf(" ");
				}
			}

		}

		k++;
		printf("\n");
	}

	printf("\n");


	system("pause");
	return 0;
}
