#include <stdio.h>
#include <stdlib.h>
void input_4b(void);   /* input( )���쫬�ŧi */
void output_4b(void);  /* output( )���쫬�ŧi */

void function_4b()
{
	printf("���{���b���ե����ܼ�\n");
	/* �o���ٵL�k�ϥ� array[0];
	   �ϰ��ܼƦW�٥i�ۦP index  
	*/
	//printf(array[0]);
	input_4b();
	output_4b();
	system("PAUSE");
	return 0;
}

int array[5];  /* �w�q�����ܼ�array�}�C*/
			   /* �w�qinput( ) */
void input_4b(void)
{
	int index;/*�w�qinput( )���ϰ��ܼ�*/
	for (index = 0; index < 5; index++)
	{
		printf("�п�J #%d ���: ",
			index + 1);
		scanf("%d", &array[index]);
		/* �ϥΥ����ܼư���J */
	}
}

/* �w�qoutput( )*/
void output_4b(void)
{
	int index;/*�w�qoutput( )���ϰ��ܼ�*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* �ϥΥ����ܼư���X */
		printf("array[%d] is %d\n", index,	array[index]);
}
