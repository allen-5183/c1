#include <stdio.h>
#include <stdlib.h>

int add(int, int); /* add()��ƪ��쫬 */

void ex5_5(void) {
	int sum, a = 5, b = 3;
	sum = add(a, b); /* �I�sadd()��ơA�ç�Ǧ^�ȳ]��sum */
	printf("%d+%d=%d\n", a, b, sum);
	
	//system("pause");
	//return 0;
}

int add(int num1, int num2) /* add()��ƪ��w�q */
{
	int a; /* ��add()��Ƹ̫ŧi�ܼ�a */
	a = num1 + num2;
	return a; /* �Ǧ^num1+num2 ���� */
}