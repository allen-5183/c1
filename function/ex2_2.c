#include <stdio.h>
#include <stdlib.h>
double Abs(void);

void ex2_2() {
	double num;
	num = Abs();
	printf("��ƭȤ�����Ȭ� %f\n", num);
	system("PAUSE");
	return 0;
}

double Abs(void)
{
	double num;
	printf("�п�J�@�ƭ�: ");
	scanf("%lf", &num);
	return (num >0) ? num : -num;
}