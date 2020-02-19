#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr, num;
	printf("%p ", ptr);
	for (num = 0; num < 5; num++)
		*(ptr+num) += 2;
	for (num = 0; num < 5; num++)
		printf("%d ", arr[num]);
	printf("%p ", ptr);
	return 0;
}
