/* ex10-1c.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void output(char);  /* ���output( )���쫬�ŧi */
int main( )
{	
	/* ���զr������X�J��� */
	char ch;
	printf("\n\n...�ϥ�getch()��J...\n");
	printf("�п�J�@�r��: ");
	ch = getch( ); 
	output(ch);   
	printf("\n\n...�ϥ�getchar()��J...\n");
	printf("�п�J�@�r��: ");
	ch = getchar( ); 
	output(ch);  
	printf("\n\n...�ϥ�getchar()��J...\n");
	printf("�п�J�@�r��: ");
	ch = getchar( ); 
	output(ch); 
	printf("\n");
	system("PAUSE");
	return 0;
}

/* �w�qoutput( )��ơA�ǻ��ѼƥHc���� */
void output(char c)
{
	printf("\n�ϥ�putchar()��X�r��: ");
	putchar(c); 
}
