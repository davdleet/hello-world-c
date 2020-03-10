
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//case1
	strcpy_s(str2, sizeof(str2), str1);
	puts(str2);

	//case2
	strncpy_s(str3, sizeof(str3), str1, 3);
	puts(str3);

	//case3
	strncpy_s(str3, sizeof(str3), str1, sizeof(str3)/sizeof(str3[0])-1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	return 0;
}