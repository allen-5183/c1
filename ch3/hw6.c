#include <stdio.h>
#include <stdlib.h>

void hw6(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)		/* �~�h�j�� */
	{
		for (j = 1; j <= 9; j++)	/* ���h�j�� */
			printf("%d*%d=%2d  ", i, j, i*j);
		printf("\n");
	}

	//system("pause");
	//return 0;
}
