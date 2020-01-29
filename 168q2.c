#include <stdio.h>

int main(void)
{	
	int num1=1, num2, count=1;
	printf("please enter a number: ");
	scanf("%d", &num2);
	for(;count<=num2;count++)
	{
		num1 = num1*count;
	}
	printf("%d", num1);
	return 0;
} 