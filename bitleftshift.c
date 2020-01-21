#include <stdio.h>

int main(void)
{
	int num = 15;
	int result1, result2, result3;
	result1=num<<1;
	result2=num<<2;
	result3=num<<3;
	printf("왼쪽으로 1칸 이동: %d \n", result1);
	printf("왼쪽으로 2칸 이동: %d \n", result2);
	printf("왼쪽으로 3칸 이동: %d \n", result3);
	return 0;
}