#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex2_1();
void ex2_2();
void ex2_3();
void ex2_4();
void ex2_5();
void ex2_6();
void ex2_7();
void ex2_8();
void ex2_9();
void ex2_10();
void ex2_11();

void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw6();
void hw7();
void hw8();
void hw9();
void hw10();

void main(void)
{
	int input;
	printf("1.  ����ǦC�P�榡�X������\n");
	printf("2.  �l�ƹB��l\n");
	printf("3.  ���W�P����B��l\n");
	printf("4.  �޿�B��l\n");
	printf("5.  �_�� if �ԭz���m��\n");
	printf("6.  if-else-if �ԭz������\n");
	printf("7.  if �P else ���t����D");
	printf("8.  ����B��l���d��\n");
	printf("9.  switch �ԭz���d��\n");
	printf("10. while�j�骺�d��\n");
	printf("11. �H�_��while�j���g�E�E���k��\n");
	printf("----------------------------------\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex2_1();
		break;
	case 2:
		ex2_2();
		break;
	case 3:
		ex2_3();
		break;
	case 4:
		ex2_4();
		break;
	case 5:
		ex2_5();
		break;
	case 6:
		ex2_6();
		break;
	case 7:
		ex2_7();
		break;
	case 8:
		ex2_8();
		break;
	case 9:
		ex2_9();
		break;
	case 10:
		ex2_10();
		break;
	case 11:
		ex2_11();
		break;
	case 12:
		hw1();
		break;
	case 13:
		hw2();
		break;
	case 14:
		hw3();
		break;
	case 15:
		hw4();
		break;
	case 16:
		hw5();
		break;
	case 17:
		hw6();
		break;
	case 18:
		hw7();
		break;
	case 19:
		hw8();
		break;
	case 20:
		hw9();
		break;
	case 21:
		hw10();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}