#include <stdio.h>
#include <stdlib.h>
void ex1_output();   //��ƭ쫬�ŧi
void dash0();

void ex1() {
	printf("�I�s output ���!!\n");
	dash0();
	ex1_output(); /* �I�s output ���  */
	dash0();
	printf("�I�s����, over!!\n");
	system("PAUSE");
	return 0;
}

/* output() ��ƪ��w�q */
void ex1_output()
{
	printf("�ڳ��w iMac\n");
	printf("�ڳ��w iPad\n");
}

void dash0()
{
	int i;
	for (i = 0; i<50; i++)
		printf("-");
	printf("\n");
}