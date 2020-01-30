#include <stdio.h>

int main(void)
{	
	int opt;
	double num1, num2;
	printf("1.add\n2.subtract\n3.multiply\n4.divide\n");
	scanf("%d", &opt);
	printf("enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);
	if(opt==1)
		printf("result is: %f", num1+num2);
	if(opt==2)
		printf("result is: %f", num1-num2);
	if(opt==3)
		printf("result is: %f", num1*num2);
	if(opt==4)
		printf("result is: %f", num1/num2);
	return 0;
} 