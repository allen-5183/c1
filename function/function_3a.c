#include <stdio.h>
#include <stdlib.h>

int square1(int);  /* square( )���쫬�ŧi */

void function_3a()
{
	int num, ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���: ");
	scanf("%d", &num);
	ans = square1(num);  /* ��ans����square()���Ǧ^�� */
	printf("%d ������O %d\n", num, ans);
	system("PAUSE");
	return 0;
}
/* �w�qsquare()�A��ƫ��A��int */
/* �n�D��J�@�ơA�ñN���ƥ����Ǧ^ */
int square1(n)
{
	int total;
	total = n*n;
	return  total; /* �Ntotal�Ǧ^�I�s��� */
}
