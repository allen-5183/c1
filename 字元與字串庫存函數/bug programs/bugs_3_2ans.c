/* bugs10-3-2ans.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* 使用字元陣列方式設定初值 */
	char str[] = {'i', 'P', 'o', 'd', '\0'};
	printf("此字串為: ");
	puts(str); 
    system("PAUSE");  
	return 0;
}
