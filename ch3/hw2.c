#include <stdio.h>
#include <stdlib.h>

void hw2(void)
{
	int n, i = 2, sum = 0;
	do
	{
		printf("�п�Jn��(n>0�A�B������): ");
		scanf("%d", &n);
	} while (n <= 0 || n % 2 == 1);

	do
	{
		sum += i;
		i += 2;
	} while (i <= n);
	printf("2+4+...+%d=%d\n", n, sum);

	//system("pause");
	//return 0;
}
