#include <stdio.h>

int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int * ptr1 = &arr[5];
	int* ptr2 = &arr[0];
	int num, temp;
	for (num = 0; num < 3; num++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1--, ptr2++;
	}
	for (num = 0; num < 6; num++)
	{
		printf("%d", arr[num]);
	}
	return 0;
}
