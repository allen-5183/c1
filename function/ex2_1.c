#include <stdio.h>
#include <stdlib.h>
double Area(void);

void ex2_1() {
	double area;
	area = Area();
	printf("����Ϊ����n�� %.2f\n", area);
	system("PAUSE");
	return 0;
}

double Area(void)
{
	double num1, num2;
	printf("�п�J����Ϊ����P�e: ");
	scanf("%lf %lf", &num1, &num2);
	return (num1*num2);
}