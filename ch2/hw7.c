#include <stdio.h>
#include <stdlib.h>

void hw7(void)
{
	int i, j, input;                   /* �]�w�j��X�� */
	printf("�п�J�P�P�����?");
	scanf("%d", &input);
	for (i = input; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	//system("pause");
	//return 0;
}
