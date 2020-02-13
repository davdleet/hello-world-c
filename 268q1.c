#include <stdio.h>

int main(void)
{
	char str1[50];
	int num;
	printf("Enter a string: ");
	scanf_s("%s", str1, 10);
	for (num = 0; str1[num] != 0;)
		num++;
	printf("The length of the string is: %d", num);
}
