#include <stdio.h>
#include <string.h>

void BubbleSort(int ary[], int len);
void DeSort(int ary[], int len);

int main(void)
{
	int i;
	int arr[7];
	for (i = 0; i < 7; i++)
	{
		printf("ют╥б%d: ", i+1);
		scanf_s("%d", &arr[i]);
	}
	DeSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void DeSort(int ary[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] < ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void BubbleSort(int ary[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}