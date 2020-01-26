#include <stdio.h>

int main(void)
{	
	int total=0, userin1=0;
	printf("number to add: ");
	while(userin1>0)
	{
		scanf("%d ", &userin1);
		total+=userin1;
	}
	printf("%d", total);
}