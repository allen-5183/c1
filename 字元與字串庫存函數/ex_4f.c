/* ex10-4f.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
	/* �n�D��J��Ӧr��A�N�Ĥ@�Ӧr����[��ĤG�Ӧr��� */
	char string1[30], string2[30];
	printf("�п�J�Ĥ@�Ӧr��: ");
	gets(string1);  /* ��J�Ĥ@�Ӧr�� */
	printf("�п�J�ĤG�Ӧr��: ");
	gets(string2);  /* ��J�ĤG�Ӧr�� */
	printf("������[���ʧ@...\n");
	strcat(string2, string1);  /* �I�sstrcat( )��� */
	printf("�Ĥ@�Ӧr�ꬰ: %s\n", string1);
	printf("�ĤG�Ӧr�ꬰ: %s\n", string2);
	system("PAUSE");
	return 0;
}
