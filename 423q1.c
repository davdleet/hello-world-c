
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int convert(int ch)
{
	int diff;
	diff = 'a' - 'A';
	char errormsg[] = "Wrong input";
	if (64 < ch && ch < 91)
		return ch + diff;
	if (96 < ch && ch < 123)
		return ch - diff;
	else
	{
		int i = 0;
		while (1)
		{
			if (errormsg[i] == '\0')
				break;
			else
			{
				putchar(errormsg[i]);
				i++;
			}
		}
	}
	return 0;
}

int main(void)
{
	int ch = getchar();
	putchar(convert(ch));
	return 0;
}