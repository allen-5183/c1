#include <stdio.h>
#include <stdlib.h>

void star(void);               /* star()��ƪ��쫬 */

void ex5_4(void) {
	star();                    /* �I�sstar��� */
	printf(" Welcome to the C language \n");
	star();                    /* �I�sstar��� */
	
	//system("pause");
	//return 0;
}

void star(void)
{
	printf("*************\n"); /* �L�X13�ӬP�� */
	return;
}