#include <stdio.h>
#include <stdlib.h>

void function_1a(void);  /* ��ƭ쫬�ŧi */

void function_1a()
{
	printf("�I�soutput���!!\n");
	output();     /* �I�soutput( )��� */
	printf("�I�s�����Aover!!\n");
	system("PAUSE");
	//return 0;
}

/* output( )��ƪ��w�q */
output(void)
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�]���wApple watch\n");
}
