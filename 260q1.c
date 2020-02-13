#include <stdio.h>

int main(void)
{
	int arr1[5], i, biggest, smallest, total;
	printf("please enter 5 numbers: ");
	for(i=0;i<5;i++)
		scanf("%d", &arr1[i]);
	biggest = arr1[0];
	smallest = arr1[0];
	total = 0;
	for(i=0;i<5;i++)
	{
		if(arr1[i]>biggest)
			biggest=arr1[i];
		if(arr1[i]<smallest)
			smallest=arr1[i];
		total=total+arr1[i];
	}
	printf("최댓값: %d \n", biggest);
	printf("최솟값: %d \n", smallest);
	printf("합: %d \n", total);
	return 0;
}