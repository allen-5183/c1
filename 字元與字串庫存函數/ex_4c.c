/* ex10-4c.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
	/* �n�D��J�@�r��A�N�r�ꤤ�^��j�g�r���ର�p�g */
	char string[30];
	printf("��J�����j�g���r��: ");
	gets(string);  
	strlwr(string);  
	printf("�N�j�g�ର�p�g: %s\n", string);
	system("PAUSE");
	return 0;
}
