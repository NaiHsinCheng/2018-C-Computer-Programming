#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	while (i <= 10) {
		int a, b, c;								//三角形三邊長abc
		scanf("%d %d %d", &a, &b, &c);

		/*開始將abc排敘成xyz*/
		int x, y, z;								//最長邊x 中y 短z
		if (a >= b && a >= c)
		{
			if (b >= c) { x = a; y = b;	z = c; }
			else { x = a; y = c; z = b; }
		}
		else if (b >= a && b >= c)
		{
			if (a >= c) { x = b; y = a; z = c; }
			else { x = b; y = c; z = a; }
		}
		else if (c >= b && c >= a)
		{
			if (a >= b) { x = c; y = a; z = b; }
			else { x = c; y = b; z = a; }
		}
		/*以上為排序程式碼*/
		/*以下為判斷可否構成三角形，若可以，是何種三角形*/
		if (y + z <= x)											//判斷可否構成三角形
		{
			printf("%d %d %d 不可以構成三角形\n", a, b, c);
		}
		else													//判斷是何種三角形
		{
			printf("%d %d %d 可以構成三角形\n", a, b, c);
			if (x == y && x == z)
				printf("%d %d %d 構成的為正三角形\n", a, b, c);
			else if (x == y || y == z)
				printf("%d %d %d 構成的為等腰三角形\n", a, b, c);
			else if (x*x == y * y + z * z)
				printf("%d %d %d 構成的為直角三角形\n", a, b, c);
			else if ((x*x == y * y + z * z) && (y == z))
				printf("%d %d %d 構成的為等腰直角三角形\n", a, b, c);
			else
				printf("%d %d %d 構成的為一般的三角形\n", a, b, c);
		}
		i++;
	}

	system("pause");
	return 0;
}