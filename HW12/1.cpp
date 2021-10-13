#include<stdio.h>
#include<stdlib.h>

int check_range(int *input)			//耞N琌絛瞅ず
{
	while (*input < 1 || *input>26)
	{
		printf("The number N is out of range. Please input again!!\n\n");
		printf("Please input a number N:");
		scanf("%d", input);
	}
	return 0;
}

void draw_parallelogram(int *input)			//キ︽娩
{
	char c;
	for (int m = 1; m <= *input; m++)						//参俱キ︽娩
	{
		for (int k = 1; k <= m-1 ; k++)			//キ︽娩フ场だ
		{
			printf(" ");
		}
		for (int i = 65; i <= (*input + 64); i++)		//玡场
		{
			c = i;
			printf("%c ", c);
		}
		for (int j = (*input + 64 - 1); j >= 65; j--)	//场
		{
			c = j;
			printf("%c ", c);
		}
		printf("\n");
	}
}

void draw_diamond(int *input)				//蒂
{
	
	for (int m = 1; m <= *input; m++)						//参场蒂
	{
		char c;
		for (int k = 1; k <= (2 * (*input) - 2*m); k++)			//蒂フ场だ
		{
			printf(" ");
		}
		for (int i = 65; i <= (m + 64); i++)		//玡场
		{
			c = i;
			printf("%c ", c);
		}
		for (int j = (m + 64 - 1); j >= 65; j--)	//场
		{
			c = j;
			printf("%c ", c);
		}
		printf("\n");
	}
	for (int n = 1; n <= *input-1 ; n++)						//参场蒂
	{
		char c;
		for (int k = 1; k <= 2 * n; k++)			//蒂フ场だ
		{
			printf(" ");
		}
		for (int i = 65; i <= (*input + 64 - n); i++)		//玡场
		{
			c = i;
			printf("%c ", c);
		}
		for (int j = (*input + 64 - n - 1); j >= 65; j--)	//场
		{
			c = j;
			printf("%c ", c);
		}
		printf("\n");
	}
}
int main()
{
	int N;
	printf("Please in put a number N:");
	scanf("%d", &N);
	check_range(&N);
	draw_parallelogram(&N);
	printf("\n\n");
	draw_diamond(&N);

	system("pause");
	return 0;
}