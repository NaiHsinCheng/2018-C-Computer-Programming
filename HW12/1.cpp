#include<stdio.h>
#include<stdlib.h>

int check_range(int *input)			//�P�_N�O�_�b�d��
{
	while (*input < 1 || *input>26)
	{
		printf("The number N is out of range. Please input again!!\n\n");
		printf("Please input a number N:");
		scanf("%d", input);
	}
	return 0;
}

void draw_parallelogram(int *input)			//�L�X����|���
{
	char c;
	for (int m = 1; m <= *input; m++)						//�ΦX��ӥ���|���
	{
		for (int k = 1; k <= m-1 ; k++)			//����|��Ϊťճ���
		{
			printf(" ");
		}
		for (int i = 65; i <= (*input + 64); i++)		//�@�y���e�b��
		{
			c = i;
			printf("%c ", c);
		}
		for (int j = (*input + 64 - 1); j >= 65; j--)	//�@�y����b��
		{
			c = j;
			printf("%c ", c);
		}
		printf("\n");
	}
}

void draw_diamond(int *input)				//�L�X�٧�
{
	
	for (int m = 1; m <= *input; m++)						//�ΦX�W���٧�
	{
		char c;
		for (int k = 1; k <= (2 * (*input) - 2*m); k++)			//�٧Ϊťճ���
		{
			printf(" ");
		}
		for (int i = 65; i <= (m + 64); i++)		//�@�y���e�b��
		{
			c = i;
			printf("%c ", c);
		}
		for (int j = (m + 64 - 1); j >= 65; j--)	//�@�y����b��
		{
			c = j;
			printf("%c ", c);
		}
		printf("\n");
	}
	for (int n = 1; n <= *input-1 ; n++)						//�ΦX�U���٧�
	{
		char c;
		for (int k = 1; k <= 2 * n; k++)			//�٧Ϊťճ���
		{
			printf(" ");
		}
		for (int i = 65; i <= (*input + 64 - n); i++)		//�@�y���e�b��
		{
			c = i;
			printf("%c ", c);
		}
		for (int j = (*input + 64 - n - 1); j >= 65; j--)	//�@�y����b��
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