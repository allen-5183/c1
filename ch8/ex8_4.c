#include <stdio.h>

void ex8_4()
{
	double d;
	double *p = &d;    
	double **pp = &p;      // ��: double **pp = p;
	printf("�п�J�@double��: ");
	scanf("%lf", &d);       // ��: scanf("%f", d);
	printf("a=%.2f, *p=%.2f, and **pp=%.2f\n", d, *p, **pp);  // ��: printf("a=%d, *p=%d, and **pp=%d\n", d, *p, **pp);
	//system("PAUSE");
	//return 0;
}
