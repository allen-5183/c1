#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *data, int n);

void ex1(void)
{
	int i, n, data[10];

	printf("�п�J��Ƶ��� n(<= 10): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("�п�J�� %d �����: ", i + 1);
		scanf("%d", &data[i]);
	}

	// �����w�ƧǪk
	bubblesort(data, n);

	printf("\n�Ƨǫ᪺���G: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	system("pause");
}

void bubblesort(int *data, int n)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (data[j] < data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
}