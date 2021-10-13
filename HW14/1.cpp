#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year, mon, day;		//輸入年月日 與 防呆
	do
	{
		printf("Input:");
		scanf("%4d%2d%1d", &year, &mon, &day);
		if ((mon < 1 || mon>12) && (day < 0 || day>6))
			printf("月份要在01~12之間,且星期要在0~6之間\n");
		else if (mon < 1 || mon>12)
			printf("月份要在01~12之間\n");
		else if(day < 0 || day>6)
			printf("星期要在0~6之間\n");
	} while (mon < 1 || mon>12 || day < 0 || day>6);

	//判斷幾月(第二列)

//	char	month[10];
	if (mon == 1)
	{
		char	month[10] = "January";
		printf("%29s", month);
	}
	else if (mon == 2){
		char	month[10] = "February";
		printf("%29s", month);
	}
	else if (mon == 3) {
		char	month[10] = "March";
		printf("%29s", month);
	}
	else if (mon == 4) {
		char	month[10] = "April";
		printf("%29s", month);
	}
	else if (mon == 5) {
		char	month[10] = "May";
		printf("%29s", month);
	}
	else if (mon == 6) {
		char	month[10] = "June";
		printf("%29s", month);
	}
	else if (mon == 7) {
		char	month[10] = "July";
		printf("%29s", month);
	}
	else if (mon == 8) {
		char	month[10] = "August";
		printf("%29s", month);
	}
	else if (mon == 9) {
		char	month[10] = "September";
		printf("%29s", month);
	}
	else if (mon == 10) {
		char	month[10] = "October";
		printf("%29s", month);
	}
	else if (mon == 11)
	{
		char	month[10] = "November";
		printf("%29s", month);
	}
	else
	{
		char	month[10] = "December";
		printf("%29s", month);
	}

	printf(", %d\n", year);
	printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");

	/*日期*/
	int q=1,j,m;		//q=日期 j=幾天 m=是不是閏年

	//判斷是不是閏年
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		m = 1;
	else
		m = 0;

	//每月天數
	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
		j = 31;
	else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
		j = 30;
	else if (mon == 2 && m == 1)
		j = 29;
	else
		j = 28;

	for (int k = 1; k <= day; k++)		//控制第一天的迴圈
	{
		printf("     ");
	}
	for (int i = 1; i <= j; i++) {		//日期迴圈
		printf("%5d", q);
		q++;
		if ((day + i) % 7==0)
			printf("\n");
	}

	printf("\n");

	system("pause");
	return 0;

}