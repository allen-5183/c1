#include <stdio.h>
#include <stdlib.h>

void hw6(void)
{
	int i, j, input;                   /* �]�w�j��X�� */
	printf("�п�J�P�P�����?");
	scanf("%d", &input);
	for (i = 1; i <= input; i++)       /* �~�h�j��M�w���@�C�n�L�P�� */
	{
		for (j = 1; j <= i; j++)        /* ���h�j��L�X*�P�� */
			printf("*");
		printf("\n");
	}

	//system("pause");
	//return 0;
}
