#include <stdio.h>

int main(void)
{
	int arr[10], count, even, odd, temp;
	printf("총 10개의 숫자 입력\n");
	for (count = 0, even = 9, odd = 0; count < 10; ++count)
	{
		printf("입력%d: ", count+1);
		scanf_s("%d", &temp);
		if (temp % 2 == 1)
		{
			arr[odd] = temp;
			++odd;
		}
		else
		{
			arr[even] = temp;
			--even;
		}
	}
	printf("배열의 요소 출력: ");
	for(count = 0; count < 10; ++count)
	{
		printf("%d ", arr[count]);
	}
	return 0;
}