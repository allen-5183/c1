/* bugs10-2-2.c */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("�п�J�@�r��: ");
	ch = getche();
	if(upper(ch))  
		printf("\n%c �O�j�g�^��r�� \n", ch);
	else if(lower(ch)) 
		printf("\n%c �O�p�g�^��r��\n", ch);
	else           
		printf("\n%c ���O�^��r��\n", ch);
	system("PAUSE");
	return 0;
}
