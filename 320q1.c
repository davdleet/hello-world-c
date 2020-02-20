#include <stdio.h>

int SquareByValue(int num)
{
	num *= num;
	return num;
}

void SquareByReference(int* ptr1)
{
	*ptr1 = (*ptr1) * (*ptr1);
	return 0;
}

int main(void)
{
	int num2 = 5;
	printf("%d \n", SquareByValue(num2));
	printf("%d \n", num2);
	SquareByReference(&num2);
	printf("%d \n", num2);
	return 0;
}