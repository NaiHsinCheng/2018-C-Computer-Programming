#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int*, int, int*);			//陣列、陣列大小、比較次數
int selection_sort(int*, int, int*);
int insertion_sort(int*, int, int*);

void getarray(FILE *, int*);		//檔案資料存進大陣列
void getarray500(int*, int*);
void getarray1000(int*, int*);
void getarray2000(int*, int*);
void line(void);					//印出----------

int main()
{
	FILE *fptr,*cfptr1, *cfptr2, *cfptr3;				//檔案地址
	int a = 0, b = 0, c = 0;
	int count_b = 0,count_s = 0, count_i = 0 ;				//交換次數
	int *swap_b = &a, *swap_s = &b, *swap_i = &c;				//比較次數
	int s3500[3500];
	int s500[500];			//500的矩陣
	int s1000[1000];		//1000的矩陣
	int s2000[2000];		//2000的矩陣
	fptr = fopen("input.txt", "r");
	cfptr1 = fopen("bubble.txt", "w");
	cfptr2 = fopen("selection.txt", "w");
	cfptr3 = fopen("insertion.txt", "w");
	fprintf(cfptr1, "Bubble sort result:\n");
	fprintf(cfptr2, "Selection sort result:\n");
	fprintf(cfptr3, "Insertion sort result:\n");

	if (fptr == NULL)
	{
		printf("檔案開啟失敗...\n");
		return 1;
	}
	else
	{
		printf("Sequence 1       bubble           selection        insertion\n");
		line();

		getarray(fptr, s3500);
		
		/*500的三種*/
		//1.bubble
			getarray500(s3500, s500);
			count_b = bubble_sort(s500, 500, swap_b);
			//寫入檔案
			for (int i = 0; i < 500; i++)
			{
				fprintf(cfptr1, "%d ", s500[i]);
			}
			fprintf(cfptr1, "\n");
		//2.selection
			getarray500(s3500, s500);
			count_s = selection_sort(s500, 500, swap_s);
			//寫入檔案
			for (int i = 0; i < 500; i++)
			{
				fprintf(cfptr2, "%d ", s500[i]);
			}
			fprintf(cfptr2, "\n");
		//3.insertion
			getarray500(s3500, s500);
			count_i = insertion_sort(s500, 500, swap_i);
			//寫入檔案
			for (int i = 0; i < 500; i++)
			{
				fprintf(cfptr3, "%d ", s500[i]);
			}
			fprintf(cfptr3, "\n");
		//印到螢幕
		printf("swap times       %-17d%-17d%d\n", count_b, count_s, count_i);
		printf("copare times     %-17d%-17d%d\n", *swap_b, *swap_s, *swap_i);
		line();
		printf("Sequence 2       bubble           selection        insertion\n");
		line();

		a = 0, b = 0, c = 0;
		/*1000的三種*/
		//1.bubble
			getarray1000(s3500, s1000);
			count_b = bubble_sort(s1000, 1000, swap_b);
		//寫入檔案
			for (int i = 0; i < 1000; i++)
			{
				fprintf(cfptr1, "%d ", s1000[i]);
			}
			fprintf(cfptr1, "\n");
		//2.selection
			getarray1000(s3500, s1000);
			count_s = selection_sort(s1000, 1000, swap_s);
		//寫入檔案
			for (int i = 0; i < 1000; i++)
			{
				fprintf(cfptr2, "%d ", s1000[i]);
			}
			fprintf(cfptr2, "\n");
		//3.insertion
			getarray1000(s3500, s1000);
			count_i = insertion_sort(s1000, 1000, swap_i);
		//寫入檔案
			for (int i = 0; i < 1000; i++)
			{
				fprintf(cfptr3, "%d ", s1000[i]);
			}
			fprintf(cfptr3, "\n");
		//印到螢幕
		printf("swap times       %-17d%-17d%d\n", count_b, count_s, count_i);
		printf("copare times     %-17d%-17d%d\n", *swap_b,* swap_s, *swap_i);
		line();
		printf("Sequence 3       bubble           selection        insertion\n");
		line();

		a = 0, b = 0, c = 0;
		/*2000的三種*/
		//1.bubble
			getarray2000(s3500, s2000);
			count_b = bubble_sort(s2000, 2000, swap_b);
		//寫入檔案
			for (int i = 0; i < 2000; i++)
			{
				fprintf(cfptr1, "%d ", s2000[i]);
			}
			fprintf(cfptr1, "\n");
		//2.selection
			getarray2000(s3500, s2000);
			count_s = selection_sort(s2000, 2000, swap_s);
		//寫入檔案
			for (int i = 0; i < 2000; i++)
			{
				fprintf(cfptr2, "%d ", s2000[i]);
			}
			fprintf(cfptr2, "\n");
		//3.insertion
			getarray2000(s3500, s2000);
			count_i = insertion_sort(s2000, 2000, swap_i);
		//寫入檔案
			for (int i = 0; i < 2000; i++)
			{
				fprintf(cfptr3, "%d ", s2000[i]);
			}
			fprintf(cfptr3, "\n");
		//印到螢幕
		printf("swap times       %-17d%-17d%d\n", count_b, count_s, count_i);
		printf("copare times     %-17d%-17d%d\n", *swap_b, *swap_s, *swap_i);
		line();
		


		fclose(fptr);
		fclose(cfptr1);
		fclose(cfptr2);
		fclose(cfptr3);
		system("pause");
		return 0;
	}
}



int bubble_sort(int* array, int array_size, int* swap)
{
	int temp,count=0;		//交換次數
	for (int i = array_size - 1; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (*(array +(j - 1)) > *(array +j))
			{
				temp = *(array + (j - 1));
				*(array + (j - 1)) = *(array + j);
				*(array + j) = temp;
				count++;
			}
			(*swap)++;
		}
	}
	return count;
}

int selection_sort(int* array, int array_size, int* swap)
{
	int min, temp, count = 0;
	for (int i = 0; i < array_size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < array_size; j++)
		{
			if (*(array + j) < *(array + min))
			{
				min = j;
			}
			(*swap)++;
		}
		count++;
		temp = *(array + i);
		*(array + i) = *(array + min);
		*(array + min) = temp;
	}
	return count;
}

int insertion_sort(int* array, int array_size, int* swap)
{
	int j,index, count = 0;
	for (int i = 1; i < array_size; i++)
	{
		index = *(array + i);
		j = i;
		while (j > 0 && *(array + (j - 1)) > index)
		{
			*(array + j) = *(array + (j - 1));
			j--;
			
			(*swap)++;
		}
		*(array + j) = index;
		count++;
	}
	return count;
}

void getarray(FILE *fptr, int*s3500)
{
	while (!feof(fptr))
	{
		for (int i = 0; i < 3500; i++)
		{
			fscanf(fptr, "%d", &s3500[i]);
		}
	}
}

void line(void)
{
	for (int b = 1; b <= 60; b++)
	{
		printf("-");
	}
	printf("\n");
}

void getarray500(int* s3500, int* s500)
{
	for (int i = 0; i < 500; i++)
	{
		*(s500 + i) = *(s3500 + i);
	}
}

void getarray1000(int* s3500, int* s1000)
{
	for (int i = 0; i < 1000; i++)
	{
		*(s1000 + i) = *(s3500 + (i+500));
	}
}

void getarray2000(int* s3500, int* s2000)
{
	for (int i = 0; i < 2000; i++)
	{
		*(s2000 + i) = *(s3500 + (i + 1500));
	}
}
