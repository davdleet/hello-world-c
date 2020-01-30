#include <stdio.h>

int main(void)
{	
	int num;
	printf("enter a number: ");
	scanf("%d", &num);
	if(num<0)
		printf("num은 0보다 작습니다 \n");
	if(num>0)
		printf("num은 0보다 큽니다 \n");
	if(num==0)
		printf("num은 0입니다 \n");
	return 0;
} 