#include <stdio.h>

int main(void)
{
	int arr[10], count, even, odd, temp;
	printf("�� 10���� ���� �Է�\n");
	for (count = 0, even = 9, odd = 0; count < 10; ++count)
	{
		printf("�Է�%d: ", count+1);
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
	printf("�迭�� ��� ���: ");
	for(count = 0; count < 10; ++count)
	{
		printf("%d ", arr[count]);
	}
	return 0;
}