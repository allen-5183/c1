/* bugs10-4-1.c */
#include <stdio.h>
int main( )
{	
 	char string1[80], string2[10];
	printf("�п�J�Ĥ@�Ӧr��: ");
	gets(string1);  
	printf("�N���r�������string2��\n");
	strcpy(string1, string2);   
	printf("�ĤG�Ӧr�ꬰ: %c\n", string2);
	system("PAUSE");
	return 0;
}
