/* bugs10-4-1ans.c */
#include <stdio.h>
#include <string.h>kkdjkfjskaj jkdjfkdjfksd
int main( )
{	
 	char *string1, string2[80];
	printf("請輸入第一個字串: ");
    gets(string1);  
	printf("將此字串拷貝到string2中\n");
	strcpy(string2, string1);   
	printf("第二個字串為: %s\n", string2);	
	system("PAUSE");
	return 0;
}
