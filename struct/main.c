#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex_1a();
void ex_1b();
void ex_1b();
void ex_1_1();
void ex_1_2(); 
void ex_2a();

void main(void)
{
	int input;
	printf("1.  ���c�����\n");
	printf("2.  ���c�骺�����s��\n");
	printf("3.  ���c�ܼƪ���l��\n");
	printf("4.  �m��: �N�d�� 1b, �N���c�ѤT���Χאּ�����\n");
	printf("5.  �m��: �N�d�� 1c, �N���c�Ѳ��~�אּ�ǥͩm�W�P���Z\n");
	printf("6.  ���c�P����\n");	
	printf("7.  ���c�����ܼƧ@����k�ǻ����޼�\n");
	printf("8.  ���c�}�C�d��\n");
	printf("9.  ���c�}�C����: �x�s���\n");
	printf("10. �N�d�� 1c,���]���������, �ХH���c�}�C���覡��ܤ�\n");
	printf("11. malloc() ����\n");
	printf("12. �쵲��C\n");
	printf("13. �ק� ex_3b �H�쵲��C���覡�s����\n");
	printf("14. �쵲��C: �R���`�I\n");
	printf("----------------------------------\n\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex_1a();
		break;
	case 2:
		ex_1b();
		break;
	case 3:
		ex_1c();
		break;
	case 4:
		ex_1_1();
		break;
	case 5:
		ex_1_2();
		break;
	case 6:
		ex_2a();
		break;
	case 7:
		ex_2b();
		break;
	case 8:
		ex_3a();
		break;
	case 9:
		ex_3b();
		break;
	case 10:
		ex_3_1();
		break;
	case 11:
		ex_4a();
		break;
	case 12:
		ex_4b();
		break;
	case 13:
		ex_4c();
		break;
	case 14:
		ex_4d();
		break;
	case 15:
		//ex4_1();
		break;
	case 16:
		//ex4_2();
		break;
	case 17:
		//function_5a();
		break;
	case 18:
		//function_5b();
		break;
	case 19:
		//ex5_1();
		break;
	case 20:
		//ex5_2();
		break;
	case 21:
		//function_6a();
		break;
	case 22:
		//function_6b();
		break;
	case 23:
		//function_6c();
		break;
	case 24:
		//function_6d_1();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}