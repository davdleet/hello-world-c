#include <stdio.h>

int main(void)
{	
	int num = 1, num1 = 9;
	printf("출력할 단: ");
	scanf("%d", &num);
	while(num1>0)
	{
		printf("%d * %d = %d \n", num, num1, num*num1);
		num1--;
	}
	return 0;
}