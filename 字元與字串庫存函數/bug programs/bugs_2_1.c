/* bugs10-2-1.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
    printf("�п�J�@�r��: ");
	ch = getche();   
	if(isalnum(ch))  
		printf("\n%d �O�@�^��r���μƦr\n", ch);
	else       
		printf("\n%d ���O�@�r�����^��r���μƦr\n", ch);
	system("PAUSE");
	return 0;
}
