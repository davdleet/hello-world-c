#include <stdio.h>

int main(void)
{	
	int num = 0, total = 0;
	do
	{
		total += num;
			num= num+2;
	}while(num<101);
	printf("%d", total);
	return 0;
} 