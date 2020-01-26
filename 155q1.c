#include <stdio.h>

int main(void)
{	
	int times;
	printf("repeat how many times? ");
	scanf("%d", &times);
	while(times>0)
	{
		printf("hello world! \n");
		times--;
	}
	return 0;
}