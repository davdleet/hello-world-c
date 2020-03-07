#include <stdio.h>
#include <string.h>
void turnarray(int times, int (*arr1)[4])
{
	int arr2[4][4];
	int i, j, k, l;
	if (times == 1)
	{
		for (i = 0, k = 3; i < 4; i++, --k)
		{
			for (j = 0; j < 4; j++)
			{
				arr2[j][k] = arr1[i][j];
			}
		}
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
				printf("%d ", arr2[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	else if(times == 2)
	{
		for (i = 0, k = 3; i < 4; i++, --k)
		{
			for (j = 0, l=3; j < 4; j++, l--)
			{
				arr2[k][l] = arr1[i][j];
			}
		}
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
				printf("%d ", arr2[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	else if (times == 3)
	{
		for (i = 0, k = 3; i < 4; i++, --k)
		{
			for (j = 0, l = 3; j < 4; j++, l--)
			{
				arr2[l][i] = arr1[i][j];
			}
		}
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
				printf("%d ", arr2[i][j]);
			printf("\n");
		}
		printf("\n");
	}
}

int main(void)
{
	int i, j, k, count;
	int arr1[4][4] =
	{
		1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16
	};
	for (i = 0; i < 4; i++)
	{
		turnarray(i+1, arr1);
	}
	return 0;
}
