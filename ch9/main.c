#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void ex9_1a();
void ex9_1b();
void ex9_1c();
void ex9_1d();





void main()
{
	int input;
	printf("1.  �r����X�J�d�� scanf()\n");
	printf("2.  �ѨM�s��ϥ� scanf() ��J�����D\n");
	printf("3.  getche(), getch(), getcha(), putchar ���ϥ�\n");
	printf("4.  getche() ���ϥ�\n");
	printf("5.  ��g (4) �ϥ� getchar() ����k\n");
	printf("6.  isalnum() �d��\n");
	printf("7.  isalpha() & isdigit �d��\n");
	printf("8.  isupper() & islower �d��\n");
	printf("9.  toupper() & tolower �d��\n");
	printf("----------------------------------\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex9_1a();
		break;
	case 2:
		ex9_1b();
		break;
	case 3:
		ex9_1c();
		break;
	case 4:
		ex9_1d();
		break;
	case 5:
		ex9_1d_exam1();
		break;
	case 6:
		ex9_2a();
		break;
	case 7:
		ex9_2b();
		break;
	case 8:
		ex9_2c();
		break;
	case 9:
		ex9_2d();
		break;
	case 10:
		//ex9_10();
		break;
	case 11:
		//ex9_11();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}