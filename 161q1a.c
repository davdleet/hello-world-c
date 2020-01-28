#include <stdio.h>

int main(void)
{	
	int num = 1, total = 0;
	while(num!=0)
	{
		printf("number to add: ");
		scanf("%d", &num);
		total += num;
	}
	printf("%d", total);
	return 0;
} 