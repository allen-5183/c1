#include <stdio.h>
#include <stdlib.h>

void hw3(void)
{
	int season;

	printf("�п�J�ƭ�(1~4):");
	scanf("%d", &season);

	switch (season)
	{
	case 1:
		printf("�K��\n");
		break;
	case 2:
		printf("�L��\n");
		break;
	case 3:
		printf("���\n");
		break;
	case 4:
		printf("�V��\n");
		break;
	default:
		printf("��J���~\n");
	}

	//system("pause");
	//return 0;
}
