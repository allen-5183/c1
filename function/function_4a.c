#include <stdio.h>
#include <stdlib.h>
int number;            /* number�O�@�ӥ����ܼ� */
void output_4a(void);  /* output_4a( )���쫬�ŧi */

void function_4a()
{
	printf("Please enter a number : ");
	scanf("%d", &number);
	output_4a();
	system("PAUSE");
	return 0;
}

/* �w�qoutput_4a( ) */
void output_4a(void)
{
	printf("Number is %d\n",  number);
}
