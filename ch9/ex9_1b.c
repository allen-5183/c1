#include <stdio.h>
#include <stdlib.h>

ex9_1b()
{
	/* �B�z scanf()��J�r�������I */
	char ch;
	int i;
	for (i = 1; i <= 3; i++)                       /* �ϥΰj��n�D��J3���r�� */
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch);                          /* �Hscanf( )��J�r�� */
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
		// �k1
		while (getchar() != '\n')
			continue;
        
		/*�k 2
		while (getchar() != '\n')
			;
        */
	}

	//system("PAUSE");
	//return 0;
}
