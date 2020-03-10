
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char str[20];
	printf("정수 입력: ");
	scanf_s("%s", str, 20);
	printf("%d \n", atoi(str));
	printf("실수 입력: ");
	scanf_s("%s", str, 20);
	printf("%g \n", atof(str));
	return 0;
}