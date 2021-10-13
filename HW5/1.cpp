#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	double PI = 2 * acos(0.0);
	double a, b, c, d, e;		//5個係數
	int w, z;		//x軸範圍
	int p;			//切點x值
	printf("請輸入5個係數:");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	printf("請輸入x軸範圍:");
	scanf("%d %d", &w, &z);
	printf("請輸入所求切點的x值:");
	scanf("%d", &p);
	//斜率
	double y1;		//切點斜率
	int x = p;
	y1 = a * (-b)* PI / 30 * sin(b*PI / 30 * x) + c * (d*PI / 30)*cos(d*PI / 30 * x);



	printf("實際切線斜率:%lf\n", y1);


	// y軸上數字
	int y3 = -35;	//y軸上數字
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


	double y4 = (a * cos(b*PI / 30 * w) + c * sin(d*PI / 30 * w) + e);	//xy軸交界y值
	//y軸
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


	//x軸跟拋物線

	double y2 = (a * cos(b*PI / 30 * p) + c * sin(d*PI / 30 * p) + e);	//切點y值
	int k = 1;
	for (int x = w + 1; x <= z; x++)			//x軸範圍每一行算一次
	{
		int q, r = x, count = 0;				//讓|和數字那列整齊
		do {
			q = r / 10;				//算x軸有幾位數
			r = q;
			count++;
		} while (r != 0);

		double y = (a * cos(b*PI / 30 * x) + c * sin(d*PI / 30 * x) + e);

		int cc = 0;
		for (int m = -39; m <= 40; m++)		//每行空白迴圈
		{

			if (k % 5 == 0)		//有數字那列
			{
				if (m == 0)				//在x軸上
					printf("%d", x);
				else if (m < 0) {		//在x軸左邊
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
