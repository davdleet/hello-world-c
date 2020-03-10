
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	//case1
	strcat_s(str1,20, str2);
	puts(str1);
	strncat_s(str3, 20, str4, 7);
	puts(str3);
}