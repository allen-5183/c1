#include <stdio.h>
#include <stdlib.h>

void ex8_1() {
	int x = 100;
	int *p1 = &x;

	/*int **p2;
	p2 = &p1;
	*/

	int **p2 = &p1;
	printf("x �ܼƪ���}: %p, ������ %d\n", &x, x);
	printf("p1 �����ܼƪ���}: %p,���s�񪺦�} %p\n", &p1, p1);
	printf("p2 �����ܼƪ���}: %p,���s�񪺦�} %p\n", &p2, p2);
	printf("p1 �����ܼƪ���: %d, p2 �����ܼƪ��� %d\n", *p1, **p2);
	printf("p1��%dbytes\, p2��%dbytes\n", sizeof(p1), sizeof(p2));
	//system("pause");
	//return 0;
}
