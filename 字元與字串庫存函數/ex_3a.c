/* ex10-3a.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* �r���X�J�A�ϥ�printf( )��scanf( ) */
	char str[10];  
	printf("Please enter a string: ");
	scanf("%s", str);   
	printf("The string is: %s\n", str); 
	system("PAUSE");
	return 0;
}
