#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr1[3][9];
	int i, j, dan;
	for(i = 0, dan = 2; i < 3; i++, dan++)
	{	
		int mul = 1;
		for (j = 0; j < 9; j++, mul++)
			arr1[i][j] = dan * mul;
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
}