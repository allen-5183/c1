#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex8_1();
void ex8_2();
void ex8_3();
void ex8_4();
void ex8_5();
void ex8_6();
void ex8_7();
void ex8_8();
void ex8_9();
void ex8_10();
void ex8_11();

//void ex5_3();
//void ex5_4();



void main(void)
{
	int input;
	printf("1.  �������Шϥνd��\n");
	printf("2.  �T�����Шϥνd��\n");
	printf("3.  �����ܼư���(�@)\n");
	printf("4.  �����ܼư���(�G)\n");
	printf("5.  �ק�1, x ����ƫ��A���r��\n");
	printf("6.  ���а}�C�P�G���}�C(�@)\n");
	printf("7.  ���а}�C�P�G���}�C(�G)\n");
	printf("8.  �ܼƭȪ�����(�G)\n");
	printf("9.  �Ǧ^�h�ӼƭȪ����\n");
	printf("10. �}�C�W�٪��ȧY�}�C����}\n");
	printf("11. �Q�Ϋ��Цs���}�C�����e\n");
	printf("----------------------------------\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex8_1();
		break;
	case 2:
		ex8_2();
		break;
	case 3:
		ex8_3();
		break;
	case 4:
		ex8_4();
		break;
	case 5:
		ex8_5();
		break;
	case 6:
		ex8_6();
		break;
	case 7:
		ex8_7();
		break;
	case 8:
		ex8_8a();
		break;
	case 9:
		ex8_8b();
		break;
	case 10:
		//ex8_10();
		break;
	case 11:
		//ex8_11();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}