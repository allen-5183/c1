#include <stdio.h>
#include <stdlib.h>
int number = 100;      /* �w�q�����ܼ� */
void output_4c(void);  /* output( )���쫬�ŧi */

void function_4c()
{
	/* ���ը�Ʀb�ϰ��ܼƻP�����ܼƶ������� */
	printf("number is %d\n", number);
	output_4c();                             /* �I�soutput( )��� */
	system("PAUSE");
	return 0;
}
/* �w�q output_4c( ) */
void output_4c(void)
{
	int number = 200;  /* �w�q�ϰ��ܼ� */
	printf("number is %d\n", number); /* ��Xnumber */
}
