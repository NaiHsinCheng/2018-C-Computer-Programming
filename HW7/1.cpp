#include<stdio.h>
#include<stdlib.h>

void mypush(int);	//�ǤJ�@�Ӿ��N�A�ӼƦr�n�Qpush��Stack��
int mypop();	//�NStack���̤W�������������æ^�Ṋ̀����ƭȡA�Ө禡�����n���P�_�A��Stack���w�g�S�������i�H���X�ɡA�����n�^�ǿ��~�T���A�i�H�Q�Φ^��-1�ӧ�

struct node {
	int data;
	struct node *next;
};
struct node *stack;


int main()
{
	stack= NULL;

	printf("Nothing in stack.\n");
	int x=0, n;
	printf("Please input the instruction:");
	while (scanf("%d",&x)!=EOF)
	{
		if (x == 1)
		{
			scanf("%d",&n);
			printf("Push %d into stack.\n", n);
			mypush(n);
		}
		else
		{
			int b;
			b=mypop();
			if (b == -1)
			{
				printf("Error pop.\n");
				printf("Nothing in stack.\n");
			}
			else
			{
				printf("Pop %d from stack.\n", b);
			}
		}
		struct node *temp;
		temp = stack;
		while (temp!=NULL)
		{
			printf("*       *\n");
			printf("*%5d  *\n", temp->data);
			printf("*       *\n");
			printf("*********\n");
			temp = temp->next;
		}
		printf("Please input the instruction:");
	}

	system("pause");
	return 0;
}


void mypush(int N)
{
	struct node *newm;
	newm = (struct node*)malloc(sizeof(struct node));
	newm->data = N;
	newm->next = NULL;
	newm->next = stack;
	stack = newm;
}

int mypop()
{
	if (stack == NULL)
	{
		return -1;
	}
	else
	{
		struct node *ttemp;
		ttemp = stack;
		int number;
		number = ttemp->data;
		stack = stack->next;
		free(ttemp);
		return number;
	}
}


