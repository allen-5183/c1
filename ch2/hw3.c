#include <stdio.h>
#include <stdlib.h>

void hw3(void)
{
	float t;
	printf("�п�J��� => ");
	scanf("%f", &t);
	if (t >= 20 && t <= 22) {
		printf("�Х[�@�����~�M!\n");
	}
	else if (t >= 14 && t <= 19)
		printf("�Ѯ�N, �Ь�W�~�M!\n");

	printf("���Ѯ�� = %.1f\n", t);
	
	//system("pause");
	//return 0;
}
