/* ex10-4e.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
	/* �n�D��J�r��A�����r��e N �Ӧr����t�@�r�� */
	char string1[30], string2[30]={'\0'};
	int size;
	printf("�п�J�Ĥ@�Ӧr��: ");
	gets(string1); 
	printf("�аݭn�����h�֭Ӧr��: ");
	scanf("%d", &size);   
	printf("����������ʧ@...\n\n");
	strncpy(string2, string1, size);  
 	printf("�ĤG�Ӧr�ꬰ: %s\n", string2);
 	system("PAUSE");
	return 0;
}
