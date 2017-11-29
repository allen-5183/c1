#include <stdio.h>
#include <stdlib.h>

void ex_1b()
{
    /*
	  定義結構變數後, 要存取結構成員, 需用運算子 '.' 來指定要存取哪一個結構成員(欄位) 	
	*/

	/* 宣告結構triangle的型態，以成員運算子" . "存取結構結構成員*/
	struct triangle
	{
		int length, height;	/* 三角形的長與高 */
		double area;	    /* 三角形的面積 */
	};
	struct triangle tri;

	printf("請輸入三角形的長: ");
	scanf("%d", &tri.length);  /* 以tri.length存取結構成員length */

	printf("請輸入三角形的高: ");
	scanf("%d", &tri.height);  /* 以tri.height存取結構成員height */

	tri.area = tri.length * tri.height / 2.0;  /* 以tri.area存取結構成員area */
	printf("三角形的面積為: %.2f\n", tri.area);
	
	//system("PAUSE");
	//return 0;
}