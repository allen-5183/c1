#include <stdio.h>
#include <stdlib.h>

void calculate();

void ex2() {
	calculate();
	system("PAUSE");
	return 0;
}


/* calculate() ��ƪ��w�q */
void calculate()
{
	int num;
	printf("�п�J����:");
	scanf("%d", &num);
	if (num >= 60)
		printf("pass\n");
	else
		printf("down\n");
}


void dash()
{
	int i;
	for (i = 0; i<50; i++)
		printf('-');
	printf("\n");
}