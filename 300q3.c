#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = &arr[4];
	int num, total=0;
	for (num = 0,total =0; num < 5; num++)
	{
		total += (*ptr--);
	}
	printf("%d", total);
	return 0;
}
