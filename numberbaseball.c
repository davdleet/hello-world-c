#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int rand1[3], ans[3], i, correct =0, strike = 0, ball =0;
	srand((int)time(NULL));
	for (i = 0; i < 3; i++)
	{
		rand1[i] = rand() % 9;
	}
	printf("Start Game!\n");
	while (correct == 0)
	{
		strike = 0, ball = 0;
		printf("3개의 숫자 선택: ");
		scanf_s("%d %d %d", &ans[0], &ans[1], &ans[2]);
		if (ans[0] == rand1[0])
			strike++;
		else if (ans[0] == rand1[1] || ans[0] == rand1[2])
			ball++;
		if (ans[1] == rand1[1])
			strike++;
		else if (ans[1] == rand1[0] || ans[1] == rand1[2])
			ball++;
		if (ans[2] == rand1[2])
			strike++;
		else if (ans[2] == rand1[0] || ans[2] == rand1[1])
			ball++;
		printf("%d stike %d ball\n\n", strike, ball);
		if (strike == 3)
			correct = 1;
	}
	printf("Game Over!");
}