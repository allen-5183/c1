#include <stdio.h>
#include <stdlib.h>

void ex_1_1()
{
	/*
	定義結構變數後, 要存取結構成員, 需用運算子 '.' 來指定要存取哪一個結構成員(欄位)
	*/

	/* 宣告結構triangle的型態，以成員運算子" . "存取結構結構成員*/
	struct square
	{
		int length;	    /*正方形邊長 */
		double area;	    /* 三角形的面積 */
	};
	struct square squ;

	printf("請輸入正方形的邊長: ");
	scanf("%d", &squ.length);            /* 以 squ.length存取結構成員length */

	squ.area = squ.length * squ.length;  /* 以 squ.area存取結構成員area */
	printf("正方形的面積為: %.2f\n", squ.area);

	//system("PAUSE");
	//return 0;
}