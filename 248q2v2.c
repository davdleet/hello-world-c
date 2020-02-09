#include <stdio.h>


void gugu(int dan1, int dan2)
	{
	int dan3, dan4;
	if(dan2>dan1)
	{
		dan4 = dan1;
		dan3 = dan2;
		dan1 = dan3;
		dan2 = dan4;
	}
	for(;dan2<=dan1;dan2++)
		{
			for(dan3=1;dan3<10;dan3++)
				printf("%d * %d = %d \n", dan2, dan3, dan1*dan3);
		}
}
int main(void)
{
	gugu(9, 3);
}