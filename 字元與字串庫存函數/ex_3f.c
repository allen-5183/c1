/* ex10-3f.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* �H�t�@�ؤ覡�L�X */
	char str[3][20] = {"iPod", "iMac", "iPhone"};
	int index;
	for(index = 0; index < 3; index++)   
		printf("�r�� %d �� %s\n", index+1, str+index);
    system("PAUSE");
	return 0;
}
