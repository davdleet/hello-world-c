#include <stdio.h>

int main(void)
{	
	double num1, num2, add, sub, mul, div;
	printf("enter two decimal numbers: ");
	scanf("%lf %lf", &num1, &num2);
	add = num1+ num2;
	sub = num1 -num2;
	mul = num1 * num2;
	div = num1 / num2;
	printf("add: %f \nsub: %f\nmul: %f\ndiv: %f\n", add, sub, mul, div);
	return 0;
}