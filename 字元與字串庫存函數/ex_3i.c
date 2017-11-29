/* file name: ex10-3i.c */
#include <stdio.h>
char *input(void);  /* 函數原型宣告 */
int main( )
{	
	/* 錯誤的示範 */
	char *str;
	str = input();  /* 呼叫input( )函數，string接收函數傳回值 */
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
