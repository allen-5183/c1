#include <stdio.h>
#include <stdlib.h>

void ex_1a()
{
	/* �ŧi�ǥͦ��Z�����c���A */
	struct student
	{
		char name[20];      	/* �ǥͩm�W */
		int score; 	            /* �ǥͦ��Z*/
	}  rec1;                    /* �w�q���c�ܼ�rec1 */
	
	struct student rec2;        /* �w�q���c�ܼ�rec2 */

								/* �Hsizeof( )�p�⵲�c�ܼ�rec1�Prec2�Ҧ��O����Ŷ� */
	printf("rec1 ���c�� %d bytes\n", sizeof(rec1));
	printf("rec2 ���c�� %d bytes\n", sizeof(rec2));

	//system("PAUSE");
	//return 0;
}