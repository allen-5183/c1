#include <stdio.h>

ex3()
{
	int i, j;
	int k = 1;
	printf("�п�J�@�Ʀr(1 �H�~)? ");
	scanf("%d", &i);
	for (j = 2; j<i; j++)
	{
		if (i%j == 0)
		{
			k = 0;
			break;
		}
	}
	if ((i>1) && k == 1)
	{
		printf("���\n");
	}
	else
	{
		printf("�D���\n");
	}
}