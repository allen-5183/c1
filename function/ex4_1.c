#include <stdio.h>
#include <stdlib.h>

int num;
int cube();

void ex4_1() {
	printf("��J�@���:");
	scanf("%d", &num);
	printf("����ƤT���謰:%d\n", cube());
	system("PAUSE");
	return 0;
}

int cube() {
	return num*num*num;
}

