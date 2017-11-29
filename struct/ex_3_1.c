#include <stdio.h>                                                             
#include <stdlib.h> 

void ex_3_1()
{
	struct order
	{
		char product[20];	/* 產品名稱 */
		double price;    	/* 產品單價 */
		int quantity;	    /* 產品數量 */
	};
	struct order num[5];
	int i;
	double total = 0;
	for (i = 0; i<5; i++)
	{
		printf("請輸入產品名稱: ");
		scanf("%s", &num[i].product);
		printf("請輸入產品價格: ");
		scanf("%lf", &num[i].price);
		printf("請輸入訂購量: ");
		scanf("%d", &num[i].quantity);
	}
	/* total產品總價為產品單價乘以產品數量 */
	printf("\n<< 訂單列表 >>\n");
	for (i = 0; i<5; i++) {
		total = num[i].price * num[i].quantity;
		printf("產品名稱: %s\n", num[i].product);
		printf("價格: %.1f\n", num[i].price);
		printf("數量: %d\n", num[i].quantity);
		printf("總共價格: %.1f\n\n", total);
	}
	
	//system("PAUSE");
	//return 0;
}
