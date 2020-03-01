#include <stdio.h>
#include <string.h>

int main(void)
{
	int mean = 0, count, i, j, k;
	int record[3][3][2] = {
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82}
		},
		{
			{98, 89},
			{99, 94},
			{91, 87}
		},
	};
	for (i = 0; i < 3; i++)
	{
		mean = 0;
		count = 0;
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 2; k++)
			{	
				mean += record[i][j][k];
				count++;
			}
			
		}
		printf("%d¹Ý ÀüÃ¼ Æò±Õ: %g \n", i + 1, (double)mean/count);
	}
}