#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex7_1();
void ex7_2();
void ex7_3();
void ex7_4();
void ex7_5();
void ex7_6();
void ex7_7();
void ex7_8();
void ex7_9();
void ex7_10();
void ex7_11();

//void ex5_3();
//void ex5_4();



void main(void)
{
	int input;
	printf("1.  #DEFINE �ϥνd��\n");
	printf("2.  �����ܼƪ��ϥνd��\n");
	printf("3.  �����ܼƩҦ����줸��\n");
	printf("4.  ���оާ@���m��\n");
	printf("5.  �����Ы��V���~�����A��\n");
	printf("6.  �ǻ����Ш���\n");	
	printf("7.  �ܼƭȪ�����(�@)\n");
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
		ex7_1();
		break;
	case 2:
		ex7_2();
		break;
	case 3:
		ex7_3();
		break;
	case 4:
		ex7_4();
		break;
	case 5:
		ex7_5();
		break;
	case 6:
		ex7_6();
		break;
	case 7:
		ex7_7();
		break;
	case 8:
		ex7_8();
		break;
	case 9:
		ex7_9();
		break;
	case 10:
		ex7_10();
		break;
	case 11:
		ex7_11();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}