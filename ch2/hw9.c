#include <stdio.h>
#include <stdlib.h>


void hw9() {
	int i, j, input;
	printf("�п�J�P�P�����: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= input; j++)
		{
			if (j >= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	//system("pause");
	//return 0;
}
