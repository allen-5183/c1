/* ex10-1c.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void output(char);  /* ���output( )���쫬�ŧi */
void ex10_1c( )
{	
	/* ���զr������X�J��� */
	char ch;
	printf("\n\n...�ϥ�getch()��J...\n");
	printf("�п�J�@�r��: ");
	ch = _getch( ); 
	output(ch);   
	printf("\n\n...�ϥ�getche()��J...\n");
	printf("�п�J�@�r��: ");
	ch = _getche( ); 
	output(ch);  
	printf("\n\n...�ϥ�getchar()��J...\n");
	printf("�п�J�@�r��: ");
	ch = getchar( ); 
	output(ch); 
	printf("\n");
	
	//system("PAUSE");
	//return 0;
}

/* �w�qoutput( )��ơA�ǻ��ѼƥHc���� */
void output(char c)
{
	printf("\n�ϥ�putchar()��X�r��: ");
	putchar(c); 
}
