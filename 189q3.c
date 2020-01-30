#include <stdio.h>

int main(void)
{	
	int kor,eng,mat;
	double avg;
	printf("국어: ");
	scanf("%d", &kor);
	printf("영어: ");
	scanf("%d", &eng);
	printf("수학: ");
	scanf("%d", &mat);
	avg=(kor+eng+mat)/3;
	printf("%f", avg);
	if(avg>=90)
		printf("Letter grade: A");
	else if(avg>=80)
		printf("Letter grade: B");
	else if(avg>=70)
		printf("Letter grade: C");
	else if(avg>=60)
		printf("Letter grade: D");
	else
		printf("Letter grade: F");
	return 0;
}	