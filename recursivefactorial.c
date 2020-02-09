#include <stdio.h>


int Factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*Factorial(n-1);
}
int main(void)
{
	int fac;
	printf("Factorial of which number? ");
	scanf("%d", &fac);
	printf("%d! = %d \n", fac, Factorial(fac));
	return 0;
}
