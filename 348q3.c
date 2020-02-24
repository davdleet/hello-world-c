#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr1[5][5];
	int i, j, total;
	for (i = 0; i < 4; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			printf("°ú¸ñ%d: ", j + 1);
			scanf_s("%d", &arr1[i][j]);
			total += arr1[i][j];
		}
		arr1[i][j] = total;
	}
	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += arr1[j][i];
		}
		arr1[j][i] = total;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",  arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}