#include<stdio.h>
#include<stdlib.h>

	void myswap(int* a, int* b)			//數值對調。
	{
		int temp;
		if (*a > *b)
		{
			temp = *b;
			*b = *a;
			*a = temp;
		}
	}
	int mysubtotal(int a, int b)		//a、b以a + (a + 1) + (a + 2) + ... + b的方式相加
	{
		if (a == b)
			return b;
		else
			return (a + mysubtotal(a + 1, b));
	}

	int main()
	{
		int a;
		int b;
		
		while (scanf("%d %d", &a,&b) !=EOF)
		{
			myswap( &a, &b);
			int c;
			c = mysubtotal(a, b);
			printf("%d到%d的總和為:%d\n", a, b,c);
		} 

		system("pause");
		return 0;
	}


