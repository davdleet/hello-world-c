#include <stdio.h>

int main(void)
{	
	int num;
	for(num=1;100>=num>=1;num++)
		if(num%3==0||num%4==0)
			printf("%d은 3 또는 4의 배수\n", num);
	return 0;
} 