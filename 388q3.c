#include <stdio.h>
#include <string.h>

void ComplexFuncOne(int** ptr1, int* (*ptr2)[5])
{
	return;
}
void ComplexFuncTwo(int*** ptr1, int*** (*ptr2)[5])
{
	return;
}

int main(void)
{
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];
	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);
	return 0;
}