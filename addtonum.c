#include <stdio.h>

int main(void)
{	
int num, num1, total=0;
	printf("0 부터 n까지 덧셈 n= ");
	scanf("%d", &num);
	for(num1=0;num1<=num;num1++)
		total = total+num1;
	printf("0부터 %d까지의 덧셈: %d", num, total);
	return 0;
}