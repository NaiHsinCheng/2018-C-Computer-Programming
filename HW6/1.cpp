#include<stdio.h>
#include<stdlib.h>

void myinsert(int);
int mydelete(int);
void traversal(void);

struct node {
	struct node *back;
	int data;
	struct node *next;
};
struct node *first = NULL, *last = NULL;

int main()
{
	printf("Insert the original numbers.\n");

	int i, count = 1,h;	//i�O�}�C�j�p h��delete���G
	int j;		//�}�C�Ʀr
	char s[7];		//insert��delete
	int k;			//�n�ʧ@���Ʀr

	FILE *fptr;
	fptr = fopen("input.txt", "r");

	fscanf(fptr, "%d", &i);
	while (count <= i)
	{
		fscanf(fptr, "%d", &j);
		myinsert(j);
		count++;
	}
	traversal();
	printf("------------------------------------\n");
	while (!feof(fptr))
	{

		fscanf(fptr, "%s", s);

		fscanf(fptr, "%d", &k);
		if (s[0] == 'i')
		{
			printf("Insert %d\n", k);
			myinsert(k);
			traversal();
			printf("------------------------------------\n");
		}
		else
		{
			printf("Delete %d\n", k);
			h=mydelete(k);
			if (h == -1)
			{
				printf("number %d is not in list.\n",k);
			}
			traversal();
			printf("------------------------------------\n");
		}
	}

	system("pause");
	return 0;
}

void myinsert(int num)		//�G�N�ǤJ���ƭ�num���J��list�������T��m�Alist�ݭn�����Ѥp��j���ƧǡA�Ylist���w�g���X�{num�A�h���Ainsert�ÿ�X�T���C
{

	struct node *neww, *current;
	neww = (node*)malloc(sizeof(node));
	neww->back = NULL;
	neww->data = num;
	neww->next = NULL;

	current = last;

	if (last == NULL)
	{
		last = first = neww;
	}
	else if (last->data > num)
	{
		neww->next = last;
		last->back = neww;
		last = neww;
	}
	else if (first->data < num)
	{
		first->next = neww;
		neww->back = first;
		first = neww;
	}
	else
	{
		while (current != NULL && !(current->data<num && current->next->data>num))
		{
			if (current->data == num)
			{
				printf("number %d is in list already.\n", num);
				break;
			}
				current = current->next;
		}

			if (current == NULL)
			{
				first->next = neww;
				neww->back = first;
				first = neww;
			}
			else if(current->data<num && current->next->data>num)
			{
				neww->next = current->next;
				neww->back = current;
				current->next->back = neww;
				current->next = neww;
			}
	}

}

int mydelete(int num)		//�N�ǤJ���ƭ�num�qlist�������A�p�G�䤣��Ʀr�A�����^�� - 1�C
{
	//search
	struct node *current;
	current = NULL;
	if (last == NULL)
	{
		printf("Nothing in this list.\n");
	}
	else
	{
		current = last;
		while (current != NULL && current->data != num)
		{
			current = current->next;
		}
	}

	//delete
	if (current == NULL)
	{
		return -1;
	}
	else
	{
		if (current == last && current == first)
		{
		last = NULL;
		first = NULL;
		free(current);
		}
		else if (current == last)
		{
		last = current->next;
		current->next->back = NULL;
		free(current);
		}
		else if (current == first)
		{
		first = current->back;
		current->back->next = NULL;
		free(current);
		}
		else
		{
		current->back->next = current->next;
		current->next->back = current->back;
		free(current);
		}
		return 0;
	}

}

void traversal(void)
{
	struct node *current;
	current = last;
	printf("list: ");
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}