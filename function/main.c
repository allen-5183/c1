#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//�w�q��k 
void function_1a();
void function_2a();
void function_3a();
void ex1();

void main(void)
{
	int input;
	printf("1.  �ϥΪ̦۩w�����\n");
	printf("2.  ���X�R�d�� function_1a, �]�p�@dash ���, �b��X output ��Ƥ��e�e��, �L�X  50 �� ��-��\n");
	printf("3.  ���g�@�{��, �{�����w�q�@��� calculate(), �n�D�ϥΪ̿�J��Ƹ��, �A�P�_����ƬO�_�j��ε��� 60, \n    �H�K�L�X ��pass�� �� ��down��\n");
	printf("4.  ��ƪ��^�ǭ�\n");
	printf("5.  return�ԭz\n");
	printf("6.  �w�q�@�Ө�ƭn�D�ϥΪ̿�J����Ϊ����M�e, �íp��䭱�n��^�ǵ��D�{��\n");
	printf("7.  �w�q�@��ƭn�D�ϥΪ̿�J�@�ӭ�, �ñN�䵴��Ȧ^�ǫ��X\n");
	printf("8.  ��Ʀp��ǻ��Ѽ�(�@)\n");
	printf("9.  ��Ʀp��ǻ��Ѽ�(�G)\n");
	printf("10. ��Ʀp��ǻ��Ѽ�(�T)\n");
	printf("11. �ѷӽd�� function_3c ��J�T�� double �B�I��, �p���ߤ�M�å[�H��X\n");
	printf("12. �����ܼƻP�ϰ��ܼ�(�@)\n");
	printf("13. �����ܼƻP�ϰ��ܼ�(�G)\n");
	printf("14. �����ܼƻP�ϰ��ܼ�(�T)\n");
	printf("15. �թw�q�@�����ܼ� num, ��main ��Ƥ���J num ����, �A�I�s cube ��ƭp���T�����^��\n");
	printf("16. �թw�q�@�����ܼ�, �éw�q�@ input ���, ���Ƥ���J���ܼƪ���, �A�^�� main ��ƿ�X\n");
	printf("17. ���j���(�@)\n");
	printf("18. ���j���(�G)\n");
	printf("19. �Q�λ��j��ƨD��ƪ�   gcd(�̤j���]��)\n");
	printf("20. �Q�ΫD���j��ƨD��ƪ� gcd(�̤j���]��)\n");
	printf("21. �x�s���O(�@)\n");
	printf("22. �x�s���O(�G)\n");
	printf("23. �x�s���O(�T)\n");
	printf("24. �ϥΥ~���ɮ��ܼ�: function_6d_1\n");
	printf("----------------------------------\n\n");
	printf("�п�J�n���檺�d��? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		function_1a();
		break;
	case 2:
		ex1();
		break;
	case 3:
		ex2();
		break;
	case 4:
		function_2a();
		break;
	case 5:
		function_2b();
		break;
	case 6:
		ex2_1();
		break;
	case 7:
		ex2_2();
		break;
	case 8:
		function_3a();
		break;
	case 9:
		function_3b();
		break;
	case 10:
		function_3c();
		break;
	case 11:
		ex3_1();
		break;
	case 12:
		function_4a();
		break;
	case 13:
		function_4b();
		break;
	case 14:
		function_4c();
		break;
	case 15:
		ex4_1();
		break;
	case 16:
		ex4_2();
		break;
	case 17:
		function_5a();
		break;
	case 18:
		function_5b();
		break;
	case 19:
		ex5_1();
		break;
	case 20:
		ex5_2();
		break;
	case 21:
		function_6a();
		break;
	case 22:
		function_6b();
		break;
	case 23:
		function_6c();
		break;
	case 24:
		function_6d_1();
		break;
	default:
		printf("�A��J���Ʀr���b�d��!\n");
		break;
	}

	system("pause");

}