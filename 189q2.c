#include <stdio.h>

int main(void)
{	
	int num1, num2;
	printf("enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	if(num1>num2)
		printf("%d", num1-num2);
	else if(num2>num1)
		printf("%d", num2-num1);
	return 0;
} 