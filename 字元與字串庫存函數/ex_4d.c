/* ex10-4d.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
	/* �n�D��J�@�r��A�ñN�r�������t�@�r�� */
	char string1[30], string2[30];
	printf("�п�J�Ĥ@�Ӧr��: ");
	gets(string1);  
	printf("����������ʧ@...\n");
	strcpy(string2, string1);  /* �I�sstrcpy( )��� */
	printf("�ĤG�Ӧr�ꬰ: %s\n", string2);
	system("PAUSE");
	return 0;
}
