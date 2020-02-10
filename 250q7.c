#include <stdio.h>


int main(void)
{
	int num1, num2;
	int num3;
	printf("상수 n 입력: ");
	scanf("%d", &num1);
	for(num3=0,num2=2;num2<=num1;num3++)
		num2=num2*2;
	printf("%d", num3);
	return 0;
}
