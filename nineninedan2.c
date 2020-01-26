#include <stdio.h>

int main(void)
{	
	int num, num1;
	num1 = 1;
	printf("몇 단? ");
	scanf("%d" , &num);
	while(num1<10)
	{
		printf("%d * %d = %d \n", num, num1, num*num1);
		num1++;
	}
	return 0;
}