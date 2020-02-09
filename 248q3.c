#include <stdio.h>


int main(void)
{
	int num1, num2, fac1=1, fac2=1, gcd = 1;
	printf("Enter two numbers ");
	scanf("%d %d", &num1, &num2);
	if(num1==0||num2==0)
		printf("%d", 1);
	if(num2 > num1)
	{
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}
	for(fac1=1;fac1<num1;fac1++)
	{
		for(fac2=1;fac2<num2;fac2++)
			if(num1%fac1==0 && num2%fac2==0 && fac1==fac2)
					{
						if(fac1>gcd)
							gcd = fac1;
					}	
	}
	printf("GCD: %d \n", gcd);
	return 0;
}