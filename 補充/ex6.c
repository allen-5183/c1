#include <stdio.h>

void ex6() {

	int x; /*�ŧix*/
	int y; /*�ŧiy*/
	int z; /*�ŧiz(�n)*/

	for (x = 1; x <= 9; x++) {

		for (y = 1; y <= 9; y++) {
			z = x*y;
			printf("%d*%d=%d ", y, x, z);
		}

		printf("\n");
	}

	//system("PAUSE");
	//return 0;
}