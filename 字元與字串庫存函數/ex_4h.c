/* ex10-4h.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( )
{	
    /* ��r�ꪺ��� */
	char string1[30], string2[30];
	int difference;
	printf("�п�J�Ĥ@�Ӧr��: ");
	gets(string1);  
	printf("�п�J�ĤG�Ӧr��: ");
	gets(string2);   
	printf("���������ʧ@...\n");
	difference = strcmp(string1, string2);
    switch(difference)
    {
       case 0: printf("%s �P %s �O�ۦP��\n", string1, string2); 
               break;
       case 1: printf("%s �j�� %s\n", string1, string2); 
               break;       
       case -1: printf("%s �p�� %s\n", string1, string2); 
               break;  
    }          
 	system("PAUSE");
	return 0;
}
