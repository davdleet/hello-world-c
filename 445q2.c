#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void clearenter(char* str)
{
	int size;
	size = strlen(str);
	str[size - 1] = 0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	fputs("문자열을 입력해주세요: ", stdout);
	fgets(str1, strlen(str1), stdin);
	clearenter(str1);
	fputs("문자열을 입력해주세요: ", stdout);
	fgets(str2, strlen(str2), stdin);
	clearenter(str2);
	strcpy_s(str3, sizeof(str3), str1);
	strcat_s(str3, sizeof(str3), str2);
	fputs(str3, stdout);
}