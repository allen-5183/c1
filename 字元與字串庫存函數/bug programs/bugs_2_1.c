/* bugs10-2-1.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
    printf("請輸入一字元: ");
	ch = getche();   
	if(isalnum(ch))  
		printf("\n%d 是一英文字母或數字\n", ch);
	else       
		printf("\n%d 不是一字元為英文字母或數字\n", ch);
	system("PAUSE");
	return 0;
}
