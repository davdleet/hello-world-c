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
		printf("������ 1, ������ 2, ���� 3: ");
		scanf_s("%d", &user);
		randomrcp = (rand() % 2) + 1;
		if (user == 1)
		{
			if (randomrcp == 1)
			{
				printf("����� ���� ���� ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				draw++;
			}
			if (randomrcp == 2)
			{
				printf("����� ���� ���� ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
				win++;
			}
			if (randomrcp == 3)
			{
				printf("����� ���� ���� ��ǻ�ʹ� �� ����, �����ϴ�!\n");
				lose++;
			}
		}
		else if (user == 2)
		{
			if (randomrcp == 1)
			{
				printf("����� ���� ���� ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				lose++;
			}
			if (randomrcp == 2)
			{
				printf("����� ���� ���� ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				draw++;
			}
			if (randomrcp == 3)
			{
				printf("����� ���� ���� ��ǻ�ʹ� �� ����, �̰���ϴ�!\n");
				win++;
			}
		}
		else if (user == 3)
		{
			if (randomrcp == 1)
			{
				printf("����� �� ���� ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
				win++;
			}
			if (randomrcp == 2)
			{
				printf("����� �� ���� ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				lose++;
			}
			if (randomrcp == 3)
			{
				printf("����� �� ���� ��ǻ�ʹ� �� ����, �����ϴ�!\n");
				draw++;
			}
		}
		else if (user > 3 || user < 1)
			printf("�߸��� �Է��Դϴ�.\n");
	}
	printf("���� ���: %d�� %d�� %d��", win, draw, lose);
}
