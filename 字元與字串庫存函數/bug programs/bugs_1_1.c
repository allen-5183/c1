/* bugs10-1-1.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* ���� getchar()��J�r�� */
	char ch;
	int i;
	for(i=1; i<=3 ; i++)  /* �ϥΰj��n�D��J3���r�� */
	{
		printf("#%d ����J��Ƭ�: ", i);
		ch=getchar();  
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
 	}
 	system("PAUSE");
	return 0;
}
