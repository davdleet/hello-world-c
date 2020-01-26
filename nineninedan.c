#include <stdio.h>

int main(void)
{	
	int num = 2;
	while(num<10)
	{
		int num1=1;
		while(num1<10)
		{
			printf("%d * %d = %d \n", num, num1, num*num1);
			num1++;
		}
		num++;
		printf("\n");
	}
	return 0;
}