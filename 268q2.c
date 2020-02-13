#include <stdio.h>

int main(void)
{
	char str1[50], str2[50];
	int num, num2;
	printf("Enter a string: ");
	scanf_s("%s", str1, 10);
	for (num = 0; str1[num] != 0;)
		num++;
	num2 = num-1;
	for (num = 0; str1[num] != 0; num++, num2--)
	{
		str2[num] = str1[num2];
	}
	str2[num] = 0;
	printf("Reversed string: %s", str2);
	return 0;
}
