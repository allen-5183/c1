#include <stdio.h>
#include <stdlib.h>

void ex5_2(void) {
	// 2 �� 2 ���}�C 
	int A[2][4][3] = { 
						{{21,32,65},
						 {78,94,76},
						 {79,44,65},
						 {89,54,73}},
						{{32,56,89},
						 {43,23,32},
						 {32,56,78},
						 {94,78,45}}
	                 };

	int i=0,j=0,k=0, min, max;
	min = max = A[0][0][0];   /* �N max �P min ���]���}�C���Ĥ@�Ӥ��� */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 3; k++) {
				if (A[i][j][k] > max) /* �P�_ A[i] �O�_�j�� max */
					max = A[i][j][k];
				if (A[i][j][k] < min) /* �P�_ A[i] �O�_�p�� min */
					min = A[i][j][k];
			}
		}
	}

	printf("The maximum value of the array element :%d\n", max);
	printf("The minimum value of the array element :%d\n", min);

	//system("pause");
	//return 0;
}