#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void ex1_5();
void ex1_6();
void ex1_7();

void hw1();
void hw2();
void hw3();
void hw4();

void main(void)
{
	int input;
	printf("1.  �Ĥ@��C�{���y��\n");
	printf("2.  �{���϶��Υ���\n");
	printf("3.  �y�k���~\n");
	printf("4.  �y�N���~\n");
	printf("5.  ����(overflow)\n");
	printf("6.  �����X��쪺�e��\n");
	printf("7.  ��J���scanf()");
	printf("8.  HW1\n");
	printf("9.  HW2\n");
	printf("10. HW3\n");
	printf("11. HW4\n");
	printf("----------------------------------\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex1_1();
		break;
	case 2:
		ex1_2();
		break;
	case 3:
		ex1_3();
		break;
	case 4:
		ex1_4();
		break;
	case 5:
		ex1_5();
		break;
	case 6:
		ex1_6();
		break;
	case 7:
		ex1_7();
		break;
	case 8:
		hw1();
		break;
	case 9:
		hw2();
		break;
	case 10:
		hw3();
		break;
	case 11:
		hw4();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}