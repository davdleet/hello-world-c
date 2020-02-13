#include <stdio.h>

int main(void)
{
	char arr1[]={'G','o','o','d',' ','t','i','m','e'};
	int i, length;
	length = sizeof(arr1)/sizeof(char);
	for(i=0;i<length;i++)
		printf("%c", arr1[i]);
	printf("\n");
	return 0;
}