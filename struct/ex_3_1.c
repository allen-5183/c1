#include <stdio.h>                                                             
#include <stdlib.h> 

void ex_3_1()
{
	struct order
	{
		char product[20];	/* ���~�W�� */
		double price;    	/* ���~��� */
		int quantity;	    /* ���~�ƶq */
	};
	struct order num[5];
	int i;
	double total = 0;
	for (i = 0; i<5; i++)
	{
		printf("�п�J���~�W��: ");
		scanf("%s", &num[i].product);
		printf("�п�J���~����: ");
		scanf("%lf", &num[i].price);
		printf("�п�J�q�ʶq: ");
		scanf("%d", &num[i].quantity);
	}
	/* total���~�`�������~������H���~�ƶq */
	printf("\n<< �q��C�� >>\n");
	for (i = 0; i<5; i++) {
		total = num[i].price * num[i].quantity;
		printf("���~�W��: %s\n", num[i].product);
		printf("����: %.1f\n", num[i].price);
		printf("�ƶq: %d\n", num[i].quantity);
		printf("�`�@����: %.1f\n\n", total);
	}
	
	//system("PAUSE");
	//return 0;
}
