/* bugs10-4-1.c */
#include <stdio.h>
int main( )
{	
 	char string1[80], string2[10];
	printf("請輸入第一個字串: ");
	gets(string1);  
	printf("將此字串拷貝到string2中\n");
	strcpy(string1, string2);   
	printf("第二個字串為: %c\n", string2);
	system("PAUSE");
	return 0;
}
