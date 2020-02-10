#include <stdio.h>


int main(void)
{
	int sec=0, min=0, hour=0;
	printf("Enter seconds to convert: ");
	scanf("%d", &sec);
	if(sec>=60)
	{
		min=sec/60;
		sec=sec%60;
		if(min>=60)
		{
			hour=min/60;
			min=min%60;
		}
	}
	printf("[h:%d, m:%d, s:%d]", hour, min, sec);
	return 0;
}
