#include <stdio.h>

void ex8_3()
{
	int a = 100;
	int *p   = &a;    //int *p = a;   *p  �����ܼƪ������O�@��}
	int **pp = &p;    //int **pp = p; *pp �����ܼƪ������O�@��}
	printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
	//return 0;
}
