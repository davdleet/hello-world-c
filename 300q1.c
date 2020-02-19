#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr, num;
	for (num = 0; num < 5; num++)
	{
		*ptr++ += 2;
		printf("%d ", arr[num]);
	}
	return 0;
}
