/* ex10-3e.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{	
	/* �ŧi�r��}�C�A�ó]�w��� */
	char str[2][20] = {"Microsoft", "Windows Vista"};
	int index;
	for(index = 0; index < 2; index++)   
		printf("�r�� %d �� %s\n", index+1, str[index]);
	system("PAUSE");
	return 0;
}
