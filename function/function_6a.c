#include <stdio.h>
#include <stdlib.h>
void increase();

void function_6a()
{
	/* ����auto�x�s���O���ͩR�g�� */
	int count;
	printf("Testing storage class << auto >>\n");
	/* �ϥ�for�j��I�sincrease( ) */
	for (count = 1; count <= 5; count++)
	{
		printf("# %d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
	system("PAUSE");
	return 0;
}
/* �w�qincrease( )�Aai�x�s���O��auto�A��X�֥[�����G */
void increase()
{
	auto int ai = 100;  /* �w�qai��auto�x�s���O�A��Ȭ�100 */
	printf("ai = %d\n", ++ai);
}
