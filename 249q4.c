#include <stdio.h>


int main(void)
{	
	int money = 3500,spend, qty1=0, qty2=0, qty3=0;
	printf("현재 당신이 소유하고 있는 금액: %d \n", money);
	for(qty1= 0;qty1*500<=3500;qty1++)
	{
		for(qty2= 0;qty2*700<=3500;qty2++)
		{
			for(qty3=0;qty3*400<=3500;qty3++)
			{
				spend = qty1*(500)+qty2*(700)+qty3*(400);
				if(qty1>=1&&qty2>=1&&qty3>=1&&spend==3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", qty1, qty2, qty3);
			}
		}
	}
	printf("어떻게 구입 하시겠습니까? \n");
	return 0;
}