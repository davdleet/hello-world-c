#include <stdio.h>

int main(void)
{	
	int n=0;
	printf("enter a number: ");
	scanf("%d", &n);
	switch(n/10)
	{
	case 0:
		printf("0이상 10미만 \n");
	case 1:
		printf("10이상 20미만 \n");
	case 2:
		printf("20이상 30미만 \n");
	}
	return 0;
} 