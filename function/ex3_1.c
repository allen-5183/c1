#include <stdio.h>
#include <stdlib.h>

double cubeAdd(double, double, double);
double printstar3(int);
int ex3_1() {
	double num1, num2, num3, sum;
	int star;
	printf("���{���b�p��T�B�I�ƪ��ߤ�M\n\n");
	printf("�п�J�T�ӯB�I��: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	/* �ǻ�����ܼ� num1, num2 �� cubeAdd() ��� */
	/* �ϥ��ܼ� sum ������ƶǦ^��  */
	sum = cubeAdd(num1, num2, num3);
	printf("�аݭn�h�֭�*: ");
	scanf("%d", &star);
	printstar3(star);
	printf("%f ���ߤ�[ %f ���ߤ�[ %f �ߤ謰 %f\n", num1, num2, num3, sum);
	printstar3(star);
	system("PAUSE");
	return 0;
}

/* �w�q cubeAdd(), ��ƫ��A�� int, �ѼƬ� a,b �P c */
/* �p�� a,b,c ���ߤ�M�^�� */
double cubeAdd(double a, double b, double c)
{
	double ans;
	ans = a * a * a + b * b * b + c * c * c;
	return ans;
}

double printstar3(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		printf("*");
	printf("\n");
}