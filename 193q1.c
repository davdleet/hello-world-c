﻿#include <stdio.h>

int main(void)
{	
	int dan1, dan2;
	for(dan1=2;dan1<=9;dan1++)
	{
		for(dan2=1;dan2<=dan1;dan2++)
		{
			if(dan1%2==1)
				continue;
			printf("%d * %d = %d \n",dan1, dan2, dan1*dan2);
		}
	}
	return 0;
} 