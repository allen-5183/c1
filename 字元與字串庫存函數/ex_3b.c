/* ex10-3b.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main( )
{
	char name[20], ans;
	int score;
 
	printf("�п�J�z���j�W: ");
    /* �ϥ� gets( )�Ө��o�r�� */
	gets(name); 
	do  
	{
		printf("\n�п�J�z������: ");
		scanf("%d", &score);
		printf("�T�w�� (y/n)? ");
		ans = getche();  /* �ϥ�getche( )���o�ϥΪ̪��^�� */
 	} while(ans != 'y');
 	
	/* �ϥ�puts( )��X�r�� */
	puts("\n\n======================="); 
	printf("    Name: ");
	puts(name); 
	printf("    Score: %d\n", score);
	puts("=======================");
 	system("PAUSE");
	return 0;
}
