/* ex7-3e.c*/
#include <stdio.h>
#include <stdlib.h>
void ex7_3e( )
{
	int score[2][3] = {{10, 20}, {30, 40, 50}};
	int i, j;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 3; j++)
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	
	//system("PAUSE");
	//return 0;
}
