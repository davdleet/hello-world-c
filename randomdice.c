#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int seed, i;
	srand((int)time(NULL));
	for (i = 0; i < 2; i++)
		printf("�ֻ��� 1�� ���: %d\n", (rand() % 6)+1);
	return 0;
}
