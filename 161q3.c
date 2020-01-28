#include <stdio.h>

int main(void)
{	
	int num = 2, num1 = 0;
	do
	{
		num1 = 1;
		do
		{
			printf("%d * %d = %d \n", num, num1, num*num1);
			num1++;
		}while(num1<10);
		num++;
		printf("\n");
	}while(num<10);
	return 0;
} 