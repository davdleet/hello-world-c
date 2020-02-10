#include <stdio.h>

int power(int num)
{
	if(num==0)
		return 1;
	else
		return 2*power(num-1);
}
int main(void)
{
	int num1;
	printf("정수 입력: ");
	scanf("%d", &num1);
	printf("%d", power(num1));
	return 0;
}
