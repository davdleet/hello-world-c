#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], check1[10], check2[10];
	int length, count1, count2;
	printf("문자열 입력: ");
	scanf_s("%s", &str1, 20);
	length = strlen(str1);
	
	for (count1 = 0, count2 = length - 1; count1 < length / 2; ++count1, --count2)
	{
		if (str1[count1] == str1[count2])
			;
		else
		{
			printf("회문이 아닙니다.\n");
			return;
		}
	}
	printf("회문입니다");
}