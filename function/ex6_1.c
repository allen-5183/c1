#include <stdio.h>
#include <stdlib.h>
void browser();

void ex6_1() {
	int pass;
	for (;;) {
		printf("�п�J�K�X: ");
		scanf("%d", &pass);
		if (pass == -9999)
			break;
		else
			browser();
	}
	system("PAUSE");
	return 0;
}

void browser() {
	static counter = 0;
	counter++;
	printf("�ثe�s�������H�Ʀ� %d", counter);
	printf("\n\n");
}