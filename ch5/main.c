#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex5_1();
void ex5_2();
void ex5_3();
void ex5_4();

void hw1();
void hw2();
void hw3();
void hw4();
void hw5();

void main(void)
{
	int input;
	printf("1.  �G���}�C�������s��\n");
	printf("2.  ��X�T���}�C�̡A�Ҧ��������̤j��\n");
	printf("3.  �r���P�r�ꤧ����}�C������\n");
	printf("4.  ²�檺��ƽd��\n");
	printf("5.  ��{���̩I�s���\n");
	printf("6.  ex7_2b\n");
	printf("7.  ex7_2c\n");
	printf("8.  ex7_3a\n");
	printf("9.  ex7_3b\n");
	printf("10. �G���}�C��l�ȳ]�w                              ex7_3c\n");
	printf("11. �G���}�C��l�ȳ]�w-��l�ȭӼƤ֩�}�C�������Ӽ� ex7_3d\n");
	printf("12. �G���}�C��l�ȳ]�w-�t�@�ت�l�ȳ]�w�覡         ex7_3e\n");
	printf("13. �m���D�@                                        ex5_ex1\n");
	printf("14. �m���D�G(����)                                  ex5_ex2\n");
	printf("15. ��w�ƧǪk-1                                    ex7_4a\n");
	printf("16. ��w�ƧǪk-2                                    ex7_4b\n");
	printf("17.  ex7_4c\n");
	printf("18.  ex7_4d\n");
	printf("19.  ��w�ƧǪk-1\n");
	printf("20.  ��w�ƧǪk-2\n");
	printf("21.  �G���j�M�k\n");
	printf("22.  �r����X�J 10-1a \n");
	printf("23.  �r����X�J 10-1b \n");
	printf("24.  �r����X�J 10-1c \n");
	printf("5.  HW1\n");
	printf("6.  HW2\n");
	printf("7.  HW3\n");
	printf("8.  HW4\n");
	printf("9.  HW5\n");

	printf("----------------------------------\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex5_1();
		break;
	case 2:
		ex5_2();
		break;
	case 3:
		ex5_3();
		break;
	case 4:
		ex5_4();
		break;
	case 5:
		ex5_5();
		break;
	case 6:
		
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	case 10:
		ex7_3c();
		break;
	case 11:
		ex7_3d();
		break;
	case 12:
		ex7_3e();
		break;
	case 13:
		ex5_ex1();
		break;
	case 15:
		ex7_4a();
		break;
	case 16:
		ex7_4b();
		break;
	case 20:
		ex10_1a();
		break;
	case 21:
		ex10_1b();
		break;
	case 22:
		ex10_1c();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}