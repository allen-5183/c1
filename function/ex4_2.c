#include <stdio.h>
#include <stdlib.h>
int input();

void ex4_2() {
	int data;
	data = input();
	printf("��J�@���:");
	printf("����Ƭ�:%d\n", data);
	system("PAUSE");
	return 0;
}

int input() {
	int num;
	printf("��J�@���");
	scanf("%d", &num);
	return num;
}