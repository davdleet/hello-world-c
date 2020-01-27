#include <stdio.h>

int main(void)
{	
	int num=0,num1=0,total=0;
	while(num<5)
	{
		while(num1<1)
		{
			printf("number?: ");
			scanf("%d", &num1);
		}
		total+=num1;
		num+=1;
		num1=0;
	}
	printf("total: %d", total);
	return 0;
} 