#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int seed, i;
	printf("���� �� �Է�: ");
	scanf_s("%d", &seed);
	srand(seed);
	for (i = 0; i < 5; i++)
		printf("���� ���: %d\n", rand());
	return 0;
}
