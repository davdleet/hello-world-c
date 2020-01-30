#include <stdio.h>

int main(void)
{	
	int num, abs;
	printf("enter a number: ");
	scanf("%d", &num);
	abs=num>0 ? num : -num;
	printf("절댓값: %d", abs);
	return 0;
} 