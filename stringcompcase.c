
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char str1[20];
	char str2[20];
	printf("���ڿ� �Է� 1: ");
	scanf_s("%s", str1, 20);
	printf("���ڿ� �Է� 2: ");
	scanf_s("%s", str2, 20);

	if (!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� ������ ���ڿ��Դϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");
		if (!strncmp(str1, str2, 3))
			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
	}
	return 0;
}