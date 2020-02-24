#include <stdio.h>

void printodd(int num[])
{
	int i;
	int length = sizeof(num) / sizeof(num[0]);
	printf("%d", length);
	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 1)
			printf("%d ", num[i]);
	}
}

void printeven(int num[])
{
	int i;
	int length = sizeof(num) / sizeof(num[0]);
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0)
			printf("%d ", num[i]);
	}
}

int main(void)
{
	int arr1[10];
	int i;
	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr1[i]);
	}
	printodd(arr1);
	printeven(arr1);
	return 0;
}