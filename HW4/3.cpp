#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	while (i <= 10) {
		int a, b, c;								//�T���ΤT���abc
		scanf("%d %d %d", &a, &b, &c);

		/*�}�l�Nabc�ƱԦ�xyz*/
		int x, y, z;								//�̪���x ��y �uz
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
		/*�H�W���Ƨǵ{���X*/
		/*�H�U���P�_�i�_�c���T���ΡA�Y�i�H�A�O��ؤT����*/
		if (y + z <= x)											//�P�_�i�_�c���T����
		{
			printf("%d %d %d ���i�H�c���T����\n", a, b, c);
		}
		else													//�P�_�O��ؤT����
		{
			printf("%d %d %d �i�H�c���T����\n", a, b, c);
			if (x == y && x == z)
				printf("%d %d %d �c���������T����\n", a, b, c);
			else if (x == y || y == z)
				printf("%d %d %d �c���������y�T����\n", a, b, c);
			else if (x*x == y * y + z * z)
				printf("%d %d %d �c�����������T����\n", a, b, c);
			else if ((x*x == y * y + z * z) && (y == z))
				printf("%d %d %d �c���������y�����T����\n", a, b, c);
			else
				printf("%d %d %d �c�������@�몺�T����\n", a, b, c);
		}
		i++;
	}

	system("pause");
	return 0;
}