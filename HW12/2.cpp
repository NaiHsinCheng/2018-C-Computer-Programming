#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	do 
	{
		printf("請輸入要尋找的字元:");
		scanf(" %c", &c);
		if(c=='*')
			printf("結束尋找。\n");
		else if (c < 65 ||( c > 90 && c < 97 )|| c > 122)
			printf("輸入錯誤，再試一次。\n");
		else
		{

			FILE *fptr; 
			fptr = fopen("input1.txt", "w");
			char a;
			char array[52] = { 'A','B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
			srand(1);

			for (int i = 1; i <= 1000; i++)
			{
				a = rand() % 52;
				fprintf(fptr, "%c", array[a]);
			}

			fclose(fptr);

			int count=0;
			fptr = fopen("input1.txt", "r");
			//char ccc[1000];
			char n;
			fscanf(fptr, "%c", &n);
			while (!feof(fptr))
			{
				if ((c <= 'Z' && (c == n || c + 32 == n)) || (c >= 'a' && (c == n || c - 32 == n)))
					count++;
				fscanf(fptr, "%c", &n);
			}
			rewind(fptr);
/*			while (!feof(fptr))
			{
				if (n >= 97 && n <= 122)
					n -= 32;
				if(n == c)
					count++;
				fscanf(fptr, "%c", &n);
			}
			rewind(fptr);*/
				fclose(fptr);

			
			printf("字元'%c'一共找到:%d\n", c, count);

		}

	} while (c != '*');

	system("pause");
	return 0;
}