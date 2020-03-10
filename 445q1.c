
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char str[30];
	char str1[1];
	int i, total = 0;
	fputs("문자열을 입력해주세요: ", stdout);
	fgets(str, 30, stdin);
	for (i = 0; i < sizeof(str) / sizeof(str[0]); i++)
	{
		if (str[i] > 47 && str[i] < 58)
		{
			str1[0] = str[i];
			total = total + atoi(str1);
		}
	}
	printf("숫자 문자의 총 합: %d", total);
}