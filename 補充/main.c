#include "stdafx.h"

//�w�q��k int add(int x, int y)
void ex1();
int gcd();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void test();

int main()
{
	int input;
	printf("1.  ��w���ƧǪk\n");
	printf("2.  ���]�� ������\n");
	printf("3.  ���\n");
	printf("4.  �O���ƦC�ΰj��g�k\n");
	printf("5.  ���j�k�O���ƦC\n");
	printf("6.  99���k��\n");
	printf("7.  N���h\n");
	printf("8.  �L�t�Ͼ�\n");
	printf("9.  test\n");

	printf("----------------------------------\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex1();
		break;
	case 2:
		gcd();
		break;
	case 3:
		ex3();
		break;
	case 4:
		ex4();
		break;
	case 5:
		ex5();
		break;
	case 6:
		ex6();
		break;
	case 7:
		ex7();
		break;
	case 8:
		ex8();
		break;
	case 9:
		test();
		break;
	case 10:
		
		break;
	case 11:
		
		break;
	case 12:
		
		break;
	case 13:
		
		break;
	case 14:
		
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");
	return 0;
}
