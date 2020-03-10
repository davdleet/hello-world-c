#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void namecomp (char str1[], char str2[])
{	
	char name1[40];
	char name2[40];
	int i;
	char temp[1];
	for (i = 0; i < strlen(str1); i++)
	{
		temp[0] = str1[i];
		if (i == 0)
		{
			strncpy_s(name1, sizeof(name1), temp, 1);
		}
		else if (temp[0] == ' ')
			break;
		else if (temp[0] != ' ')
		{
			strncat_s(name1, sizeof(name1), temp, 1);
		}
	}
	for (i = 0; i < strlen(str2); i++)
	{
		temp[0] = str2[i];
		if (i == 0)
		{
			strncpy_s(name2, sizeof(name2), temp, 1);
		}
		else if (temp[0] == ' ')
			break;
		else if (temp[0] != ' ')
		{
			strncat_s(name2, sizeof(name2), temp, 1);
		}
	}
	if (!strcmp(name1, name2))
		fputs("두 이름은 동일합니다.\n", stdout);
	else
		fputs("두 이름은 동일하지 않습니다.\n", stdout);
}

void agecomp(char str1[], char str2[])
{
	int i, gate = 0;
	char age1[10];
	char age2[10];
	char temp[1];
	for (i = 0; i < strlen(str1); i++)
	{
		temp[0] = str1[i];
		if (temp[0] == ' ')
			gate = i;
		if (i == gate + 1)
			strncpy_s(age1, sizeof(age1), temp, 1);
		else if (i > gate)
		{
			strncat_s(age1, sizeof(age1), temp, 1);
		}
	}
	for (i = 0; i < strlen(str2); i++)
	{
		temp[0] = str2[i];
		if (temp[0] == ' ')
			gate = i;
		if (i == gate + 1)
			strncpy_s(age2, sizeof(age2), temp, 1);
		else if (i > gate)
		{
			strncat_s(age2, sizeof(age2), temp, 1);
		}
	}
	if (!strcmp(age1, age2))
		fputs("두 명의 나이가 같습니다.\n", stdout);
	else
		fputs("두 명의 나이가 같지 않습니다.\n", stdout);
}
int main(void)
{
	int i;
	char str1[50];
	char str2[50];
	fputs("정보를 입력해주세요: ", stdout);
	fgets(str1,strlen(str1), stdin);
	fputs("정보를 입력해주세요: ", stdout);
	fgets(str2,strlen(str2), stdin);
	namecomp(str1, str2);
	agecomp(str1, str2);
}