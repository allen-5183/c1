#include <stdio.h>
#include <stdlib.h>

void hw5(void)
{
	int i, arr[3];
	float sum = 0.0f;

	for (i = 0; i<3; i++)
	{
		printf("�п�Jarr[%d]����:", i);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (i = 0; i<3; i++)
		printf("arr[%d]=%d\n", i, arr[i]);
	printf("�����Ȭ� %.2f\n", sum / 3);

	//system("pause");
	//return 0;
}
