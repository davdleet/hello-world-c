#include <stdio.h>

int main(void)
{	
	int num1, num2, num3;
	printf("세 개의 정수를 입력: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("저장된 10진수 출력: ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}