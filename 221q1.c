#include <stdio.h>
int Largest(int num1, int num2, int num3)
{
	if(num1>num2)
	{
		if(num1>num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if(num2>num3)
			return num2;
		else
			return num3;
	}
}
int main(void)
{
	int num1, num2, num3;
	printf("enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("Biggest number among %d, %d, %d: %d", 
		num1, num2, num3, Largest(num1, num2, num3));
	return 0;
}
