/* ex10-4g.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
    /* �n�D��J�r��A�N�@�r�ꪺ�eN�Ӧr���A���[��t�@�Ӧr�� */
	char string1[30], string2[30];
	int size;
	printf("�п�J�Ĥ@�Ӧr��: ");
	gets(string1); 
	printf("�п�J�ĤG�Ӧr��: ");
	gets(string2);   
	printf("�аݭn���[�h�֭Ӧr��: ");
	scanf("%d", &size);  /* ��J���[�r���� */
	printf("������[���ʧ@...\n\n");
	strncat(string2, string1, size);  /* �I�sstrncat( )��� */
	printf("�Ĥ@�Ӧr�ꬰ: %s\n", string1);
	printf("�ĤG�Ӧr�ꬰ: %s\n", string2);
	system("PAUSE");
	return 0;
}
