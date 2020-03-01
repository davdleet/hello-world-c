#include <stdio.h>
#include <string.h>

void MaxAndMin(int arr1[], int** ptr1, int** ptr2)
{
	int num, max, min;
	max = arr1[0];
	min = arr1[0];
	for (num = 0; num < 5; num++)
	{
		if (arr1[num] > max)
		{
			*ptr1 = &arr1[num];
		}
		else if (arr1[num < min])
			*ptr2 = &arr1[num];
	}
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5] = {1,2,3,4,5};
	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("%d %d", *maxPtr, *minPtr);
	return 0;
}