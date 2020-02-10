#include <stdio.h>


int main(void)
{
	int count=0, num;
	for(num=2;count<10;num++)
	{
		if(num%2!=0&&num%3!=0&&num%5!=0||num==2||num==3||num==5)
		{
			printf("%d\n",num);
			count++;
		}
	}
	return 0;
}
