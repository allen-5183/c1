#include <stdio.h>
#include <stdlib.h>

void function_6c()
{
	/* ����register�x�s���O */
	int count1, count2;
	register long num = 0;  /* �w�qnum��register�x�s���O */
	printf("Testing storage class << register >>\n");
	/* �_���j���num�@�֥[���ʧ@ */
	printf("Number: \n");
	for (count1 = 1; count1 <= 500; count1++)
		for (count2 = 1; count2 <= 500; count2++)
			printf("\r%d", ++num);
	printf("\nTesting end!!\n");
	system("PAUSE");
	return 0;
}
