/* ex10-4a.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
	/* �n�D��J�@�Ӧr��A�íp��r����� */
	char string[30];
	int length;
	printf("�п�J�@�r��: ");
	gets(string);
	length = strlen(string);
	printf(" %s�r�ꪺ���׬�: %d\n", string, length);
	system("PAUSE");
	return 0;
}
