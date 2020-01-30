#include <stdio.h>

int main(void)
{	
	int num1, num2, result;
	printf("enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	result = num1>num2 ? num1-num2:num2-num1;
	printf("%d", result);
	return 0;
} 