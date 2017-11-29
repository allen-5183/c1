/* bugs10-1-1.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* 測試 getchar()輸入字元 */
	char ch;
	int i;
	for(i=1; i<=3 ; i++)  /* 使用迴圈要求輸入3次字元 */
	{
		printf("#%d 的輸入資料為: ", i);
		ch=getchar();  
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
 	}
 	system("PAUSE");
	return 0;
}
