#include <stdio.h>
#include <stdlib.h>

void ex_1_1()
{
	/*
	�w�q���c�ܼƫ�, �n�s�����c����, �ݥιB��l '.' �ӫ��w�n�s�����@�ӵ��c����(���)
	*/

	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���c����*/
	struct square
	{
		int length;	    /*�������� */
		double area;	    /* �T���Ϊ����n */
	};
	struct square squ;

	printf("�п�J����Ϊ����: ");
	scanf("%d", &squ.length);            /* �H squ.length�s�����c����length */

	squ.area = squ.length * squ.length;  /* �H squ.area�s�����c����area */
	printf("����Ϊ����n��: %.2f\n", squ.area);

	//system("PAUSE");
	//return 0;
}