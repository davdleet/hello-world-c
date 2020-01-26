#include <stdio.h>

int main(void)
{	
	int num = 1, num1,num2, total=0;
	printf("how many numbers? ");
	scanf("%d", &num);
	num2 = num;
	while(num>0)
	{
		scanf("%d", &num1);
		total += num1;
		num--;
	}
	printf("%f", (double)total/num2);
	return 0;
}