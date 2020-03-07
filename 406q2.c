#include <stdio.h>
#include <string.h>

void spiral(int (*arr1)[100], int size)
{
	int col = 0, row = 0, last, insnum=1;
	last = size * size;
	int i, j, count= 0;
	while (insnum <= last)
	{
		row = count;
		col = count;
		for (i = row, j = col; i < size+count; i++)
			arr1[j][i] = insnum++;
		size--;
		col = size+count;
		row++;
		for (i = row, j = col; i < size+count; i++)
			arr1[i][j] = insnum++;
		row = size + count;
		for (i = row, j = col; i >= count; i--)
			arr1[j][i] = insnum++;
		size--;
		col = count;
		row--;
		for (i = row, j = col; i > count; i--)
			arr1[i][j] = insnum++;
		if (insnum == last)
		{
			arr1[row][col+1] = last;
			break;
		}
		count++;
	}
}

void printsp(int(*arr1)[100], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf("%3d ", arr1[i][j]);
		printf("\n\n");
	}
}

int main(void)
{
	int size;
	int arr1[100][100] = { 0 };
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &size);
	spiral(arr1, size);
	printsp(arr1, size);
	return 0;
}
