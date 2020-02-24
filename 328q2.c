#include <stdio.h>

int main(void)
{
	int num10 = 0, count;
	count = 0;
	int arr1[20];
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num10);
	while (num10 != 1)
	{
		arr1[count] = num10 % 2;
		num10 = num10 / 2;
		++count;
		if (num10 / 2 == 1)
			arr1[count+1] = 1;
	}
	for (;count >=0; --count)
	{
		printf("%d", arr1[count]);
	}
	return 0;
}