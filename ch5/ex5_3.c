#include <stdio.h>
#include <stdlib.h>

void ex5_3(void)
{
	/*
	   �r���x�s�ɷ|�h�@�� Byte �Ӧs�񵲧��Ÿ� \O
	*/
	char ch = 'a';                /* �ŧi�r���ܼ�ch */
	char str1[] = "a";            /* �ŧi�r���ܼ�str1 */
	char str2[] = "Sweet home";   /* �ŧi�r���ܼ�str2 */

	printf("ch:%d byte\n",sizeof(ch));
	printf("str1:%d byte\n", sizeof(str1));
	printf("str2:%d byte\n",sizeof(str2));
	
	//system("pause");
	//return 0;
}