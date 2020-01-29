#include <stdio.h>

int main(void)
{	
	int num1=0;
	double num, total;
	num = 0.0;
	total = 0.0;
	for( ; num>=0.0 ; )
	{
		total = total+num;
		printf("number to add: ");
		scanf("%lf", &num);
		num1++;
	}
	printf("avg: %f", total/(num1-1));
	return 0;
} 