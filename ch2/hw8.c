#include<stdio.h>

void hw8() {
	int a, i, j, k;
	printf("�п�J�P�P�����?");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		printf("\n");
		for (j = a; j>i; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
	}
	printf("\n");
	
	//system("pause");
	//return 0;
}
