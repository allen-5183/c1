/* ex7-4a.c*/
#include <stdio.h>
#include <stdlib.h>
/*
   size: ��Ƶ���
*/

void bubble_sort_a()
{
	int i, j, k, temp, size;
	int arr[] = { 80, 30, 40, 70, 50, 60 };
	size = sizeof(arr) / sizeof(int);
	printf(".....Before sorted........\n");
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");

	/**********Bubble sort****************/
	/* 
	  �`�@�� size �Ӹ��, �ҥH�|�� size-1 ���� pass
	  ��ܳo�Ǹ�ƭn����h�֦������, ���Ƭ�����`���� -1 
	    
	*/
	for (i = 0; i < size - 1; i++) {
		/* �n��������, �Ĥ@��pass �|��1, ��2���|��2, �ĤT���|��3,....�̦�����, �ҥH�j�骺����B�⦡�� j < size-1-i */
		for (j = 0; j < size - i - 1; j++)             
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		printf("#%d pass: ", i + 1);
		for (k = 0; k < size; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	/************************************/
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	printf(".....After sorted.......\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	//system("PAUSE");
	//return 0;
}