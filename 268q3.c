#include <stdio.h>

int main(void)
{
	char str1[50], big;
	int num;
	printf("Enter a string: ");
	scanf_s("%s", str1, 12);
	for (num = 0, big = 0; str1[num] != 0; num++)
	{
		if (str1[num] > big)
			big = str1[num];
	}
	printf("%c", big);
}
