#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex_1a();
void ex_1b();
void ex_1b();
void ex_1_1();
void ex_1_2(); 
void ex_2a();

void main(void)
{
	int input;
	printf("1.  結構體測試\n");
	printf("2.  結構體的成員存取\n");
	printf("3.  結構變數的初始化\n");
	printf("4.  練習: 將範例 1b, 將結構由三角形改為正方形\n");
	printf("5.  練習: 將範例 1c, 將結構由產品改為學生姓名與成績\n");
	printf("6.  結構與指標\n");	
	printf("7.  結構指標變數作為方法傳遞的引數\n");
	printf("8.  結構陣列範例\n");
	printf("9.  結構陣列應用: 儲存資料\n");
	printf("10. 將範例 1c,假設有五筆資料, 請以結構陣列的方式表示之\n");
	printf("11. malloc() 應用\n");
	printf("12. 鏈結串列\n");
	printf("13. 修改 ex_3b 以鏈結串列的方式存放資料\n");
	printf("14. 鏈結串列: 刪除節點\n");
	printf("----------------------------------\n\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex_1a();
		break;
	case 2:
		ex_1b();
		break;
	case 3:
		ex_1c();
		break;
	case 4:
		ex_1_1();
		break;
	case 5:
		ex_1_2();
		break;
	case 6:
		ex_2a();
		break;
	case 7:
		ex_2b();
		break;
	case 8:
		ex_3a();
		break;
	case 9:
		ex_3b();
		break;
	case 10:
		ex_3_1();
		break;
	case 11:
		ex_4a();
		break;
	case 12:
		ex_4b();
		break;
	case 13:
		ex_4c();
		break;
	case 14:
		ex_4d();
		break;
	case 15:
		//ex4_1();
		break;
	case 16:
		//ex4_2();
		break;
	case 17:
		//function_5a();
		break;
	case 18:
		//function_5b();
		break;
	case 19:
		//ex5_1();
		break;
	case 20:
		//ex5_2();
		break;
	case 21:
		//function_6a();
		break;
	case 22:
		//function_6b();
		break;
	case 23:
		//function_6c();
		break;
	case 24:
		//function_6d_1();
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}