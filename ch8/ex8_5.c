#include <stdio.h>
#include <stdlib.h>

void ex8_5() {
	char x = 'c';
	char *p1 = &x;

	/*int **p2;
	p2 = &p1;
	*/

	char **p2 = &p1;
	printf("x �ܼƪ���}: %p,      ������ %c\n", &x, x);
	printf("p1 �����ܼƪ���}: %p, ���s�񪺦�} %p\n", &p1, p1);
	printf("p2 �����ܼƪ���}: %p, ���s�񪺦�} %p\n", &p2, p2);
	printf("p1 �����ܼƪ���:   %c, p2 �����ܼƪ��� %c\n", *p1, **p2);
	printf("p1��%dbytes\, p2��%dbytes\n", sizeof(p1), sizeof(p2));
	//system("pause");
	//return 0;
}
