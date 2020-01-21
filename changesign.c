#include <stdio.h>

int main(void)
{	
	int num1;
	printf("부호를 바꿀 숫자를 입력: ");
	scanf("%d", &num1);
	num1 = ~num1++;
	printf("%d", num1);
	return 0;
}