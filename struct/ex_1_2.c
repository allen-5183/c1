#include <stdio.h>
#include <stdlib.h>

void ex_1_2()
{
	/*
	�w�q���c�ܼƫ�, �n�s�����c����, �ݥιB��l '.' �ӫ��w�n�s�����@�ӵ��c����(���)
	*/

	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���c����*/
	struct S
	{
		char name[20];
		int score;
	};
	struct S stu = {"iPad nano", 98};

	printf("�ǥͪ��m�W: %s\n", stu.name);
	printf("���Z��:     %d\n", stu.score);

	//system("PAUSE");
	//return 0;
}