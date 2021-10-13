#include<stdio.h>
#include<stdlib.h>

void mypush(int);	//傳入一個整數N，該數字要被push到Stack中
int mypop();	//將Stack中最上面的元素拿掉並回傳裡面的數值，該函式必須要做判斷，當Stack中已經沒有元素可以拿出時，必須要回傳錯誤訊息，可以利用回傳-1來完

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


