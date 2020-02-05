#include <stdio.h>
double CelToFah(double num)
{
	num = 1.8 * num +32;
	return num;
}
double FahToCel(double num)
{
	num = (num-32)/1.8;
	return num;
}
int main(void)
{
	double num1, num2;
	printf("Enter a Celsius number: ");
	scanf("%lf", &num1);
	printf("The Fahrenheit degree of %f is %f \n", num1, CelToFah(num1));
	printf("Enter a Fahrenheit number: ");
	scanf("%lf", &num2);
	printf("The Celsius degree of %f is %f \n", num2, FahToCel(num2));
	return 0;
}
