/* file name: ex10-3i.c */
#include <stdio.h>
char *input(void);  /* ��ƭ쫬�ŧi */
int main( )
{	
	/* ���~���ܽd */
	char *str;
	str = input();  /* �I�sinput( )��ơAstring������ƶǦ^�� */
	printf("Input string is %s\n", str);
	return 0;
}

char *input(void)   
{
	char strin[20];
	printf("Enter a string: ");
	gets(strin);
	return strin;
}
