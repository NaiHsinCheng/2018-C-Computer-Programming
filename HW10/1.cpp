#include<stdio.h>
#include<stdlib.h>

	void myswap(int* a, int* b)			//�ƭȹ�աC
	{
		int temp;
		if (*a > *b)
		{
			temp = *b;
			*b = *a;
			*a = temp;
		}
	}
	int mysubtotal(int a, int b)		//a�Bb�Ha + (a + 1) + (a + 2) + ... + b���覡�ۥ[
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
			printf("%d��%d���`�M��:%d\n", a, b,c);
		} 

		system("pause");
		return 0;
	}


