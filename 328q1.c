#include <stdio.h>

void printodd(int num[])
{
	int i;
	int length = sizeof(num) / sizeof(num[0]);
	printf("%d", length);
	printf("Ȧ�� ���: ");
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
	printf("¦�� ���: ");
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
	printf("�� 10���� ���� �Է� \n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf_s("%d", &arr1[i]);
	}
	printodd(arr1);
	printeven(arr1);
	return 0;
}