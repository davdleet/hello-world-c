#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int randomrcp, user, lose=0, win=0, draw=0;
	srand((int)time(NULL));
	while (lose == 0)
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf_s("%d", &user);
		randomrcp = (rand() % 2) + 1;
		if (user == 1)
		{
			if (randomrcp == 1)
			{
				printf("당신은 바위 선택 컴퓨터는 바위 선택, 비겼습니다!\n");
				draw++;
			}
			if (randomrcp == 2)
			{
				printf("당신은 바위 선택 컴퓨터는 가위 선택, 이겼습니다!\n");
				win++;
			}
			if (randomrcp == 3)
			{
				printf("당신은 바위 선택 컴퓨터는 보 선택, 졌습니다!\n");
				lose++;
			}
		}
		else if (user == 2)
		{
			if (randomrcp == 1)
			{
				printf("당신은 가위 선택 컴퓨터는 바위 선택, 졌습니다!\n");
				lose++;
			}
			if (randomrcp == 2)
			{
				printf("당신은 가위 선택 컴퓨터는 가위 선택, 비겼습니다!\n");
				draw++;
			}
			if (randomrcp == 3)
			{
				printf("당신은 가위 선택 컴퓨터는 보 선택, 이겼습니다!\n");
				win++;
			}
		}
		else if (user == 3)
		{
			if (randomrcp == 1)
			{
				printf("당신은 보 선택 컴퓨터는 바위 선택, 이겼습니다!\n");
				win++;
			}
			if (randomrcp == 2)
			{
				printf("당신은 보 선택 컴퓨터는 가위 선택, 졌습니다!\n");
				lose++;
			}
			if (randomrcp == 3)
			{
				printf("당신은 보 선택 컴퓨터는 보 선택, 비겼습니다!\n");
				draw++;
			}
		}
		else if (user > 3 || user < 1)
			printf("잘못된 입력입니다.\n");
	}
	printf("게임 결과: %d승 %d무 %d패", win, draw, lose);
}
