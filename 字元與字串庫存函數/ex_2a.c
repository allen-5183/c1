/* ex10-2a.c */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getche();   
	if(isalnum(ch))  
		printf("\n%c �O�@�^��r���μƦr\n", ch);
	else       
		printf("\n%c ���O�@�r�����^��r���μƦr\n", ch);
    system("PAUSE");
	return 0;
}
