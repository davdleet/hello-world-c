#include <stdio.h>

int main(void)
{	
	int num1, num2, total=0;
	printf("please enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	for(;num1<=num2;num1++)
	{
		total += num1;
	}
	printf("%d", total);
} 