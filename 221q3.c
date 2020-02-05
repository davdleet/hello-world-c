#include <stdio.h>

void ShowFibo(int num)
{
	int num1 = 0;
	int num2 = 1;
	int num3;
	int count=1;
	if(num==1)
		printf("%d", 0);
	else
	{
		printf("%d ", 0);
		while(count<num)
		{
			num3=num1+num2;
			num1 = num2;
			num2 = num3;
			printf("%d ", num3);
			count++;
		}
	}
}

int main(void)
{
	int times;
	printf("Print fibonacci how many times? ");
	scanf("%d", &times);
	ShowFibo(times);
	return 0;
}