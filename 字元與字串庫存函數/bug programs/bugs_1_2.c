/* bugs10-1-2.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* ���� getchae()��J�r�� */
	char ch;
	int i=1;
	printf("�Y�n�����{���A�п�J'q'\n\n");
    do
	{
		printf("#%d ����J��Ƭ�: ", i);
		ch=getchar();  
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
		i++;
 	}while(ch != 'q');
 	system("PAUSE");
	return 0;
}
