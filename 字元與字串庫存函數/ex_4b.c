/* ex10-4b.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main( )
{	
	/* �n�D��J�@�r��A�ñN�p�g�^��r���ର�j�g */
	char string[30];
	printf("��J�����p�g���r��: ");
	gets(string);  
	strupr(string); 
	printf("�N�p�g�ର�j�g: %s\n", string);
	system("PAUSE");
	return 0;
}
