#include <stdio.h>

int main(void)
{	
	int num=0, num1=1;
	printf("multiply how many times? ");
	scanf("%d", &num);
	while(num>0)
	{
		printf("%d ", num1*3);
		num1++;
		num--;
	}
	return 0;
}