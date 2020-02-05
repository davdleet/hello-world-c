#include <stdio.h>

int main(void)
{	
	int num1, num2, num3;
	for(num1=0;num1<=9;num1++)
	{
		for(num2=0;num2<=9;num2++)
		{
			num3 = num1 + num2;
			if(num3==9)
			{
				printf("AZ:%d%d \n", num1, num2);
				printf("ZA:%d%d", num2, num1);
				printf("\n\n");
			}
		}
	}
	return 0;
} 