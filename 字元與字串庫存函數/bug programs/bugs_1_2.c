/* bugs10-1-2.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* 測試 getchae()輸入字元 */
	char ch;
	int i=1;
	printf("若要結束程式，請輸入'q'\n\n");
    do
	{
		printf("#%d 的輸入資料為: ", i);
		ch=getchar();  
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
		i++;
 	}while(ch != 'q');
 	system("PAUSE");
	return 0;
}
