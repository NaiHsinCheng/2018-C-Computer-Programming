#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int C(int, int);
void binomial(int);
void median(int*);
void magic_square(int);

int main()
{
	//1
	int n;
	printf("請輸入二項式次方數:");
	scanf("%d", &n);
	binomial(n);
	printf("\n");
	//2
	int input[11];
	printf("請輸入11個數字:");
	for (int i = 0; i < 11; i++)
	{
		scanf(" %d", &input[i]);
	}
	median(input);
	//3
	printf("請輸入魔方陣大小:");
	int a;
	scanf("\n %d", &a);
	magic_square(a);

	system("pause");
	return 0;
}

int C(int m, int n)
{
	if (n == 0|| m == n)
		return 1;
	else
		return C(m - 1, n - 1) + C(m - 1, n);
}
void binomial(int n)
{
	for(int i=0;i<=n;i++)
	{
		for (int j = 0; j <= i; j++)
		{
				printf("%d ", C(i, j));
		}
		printf("\n");
	}
}
void median(int* array)
{
	int temp;
	for (int i = 10; i >=0 ; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (*(array + (j - 1)) > *(array + j))
			{
				temp = *(array + (j - 1));
				*(array + (j - 1)) = *(array + j);
				*(array + j) = temp;
			}
		}
	}
	for (int j = 0; j < 11; j++)
	{
		printf("%d ", *(array + j));
	}
	printf("\n中位數是:%d\n\n", *(array + 5));
}
void magic_square(int n) 
{
	int array[15][15];
	for (int k = 0; k < n; k++)
	{
		for (int u = 0; u < n; u++)
		{
			array[k][u] = 0;
		}
	}
	array[0][n/2]=1;
	int i = 0, j = n / 2, m = 2;
	while (m <= n * n)
	{
		if ((i - 1 < 0) && (j - 1 >= 0))
		{
			i = n;
			if (array[i - 1][j - 1] != 0)
			{
				if (i + 1 > n - 1)
				{
					i = 0;
				}
				else
				{
					i = i + 1;
				}
				array[i][j] = m;
				m++;
			}
			else
			{
				i = i - 1;
				j = j - 1;
				array[i][j] = m;
				m++;
			}
		}
		
		else if (i - 1 >= 0 && j - 1 < 0)
		{
			j = n;
				if (array[i - 1][j - 1] != 0)
				{
					if (i + 1 > n - 1)
					{
						i = 0;
					}
					else
					{
						i = i + 1;
					}
					array[i][j] = m;
					m++;
				}
				else
				{
					i = i - 1;
					j = j - 1;
					array[i][j] = m;
					m++;
				}
		}
		else if (i - 1 < 0 && j - 1 < 0)
		{
			i = n;
			j = n;
				if (array[i - 1][j - 1] != 0)
				{
					i = 1;
					j = 0;
					array[i][j] = m;
					m++;
				}
				else
				{
					i = i - 1;
					j = j - 1;
					array[i][j] = m;
					m++;
				}
		}
		else
		{
			if (array[i - 1][j - 1] != 0)
			{
				if (i + 1 > n - 1)
				{
					i = 0;
				}
				else
				{
					i = i + 1;
				}
				array[i][j] = m;
				m++;
			}
			else
			{
				i = i - 1;
				j = j - 1;
				array[i][j] = m;
				m++;
			}
		}
	}

	for (int c = 0; c < n; c++)
	{
		for (int b = 0; b < n; b++)
		{
			printf("%3d ", array[c][b]);
		}
		printf("\n");
	}
}