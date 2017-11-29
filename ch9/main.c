#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex9_1a();
void ex9_1b();
void ex9_1c();
void ex9_1d();





void main()
{
	int input;
	printf("1.  字元輸出入範例 scanf()\n");
	printf("2.  解決連續使用 scanf() 輸入的問題\n");
	printf("3.  getche(), getch(), getcha(), putchar 的使用\n");
	printf("4.  getche() 的使用\n");
	printf("5.  改寫 (4) 使用 getchar() 的方法\n");
	printf("6.  isalnum() 範例\n");
	printf("7.  isalpha() & isdigit 範例\n");
	printf("8.  isupper() & islower 範例\n");
	printf("9.  toupper() & tolower 範例\n");
	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex9_1a();
		break;
	case 2:
		ex9_1b();
		break;
	case 3:
		ex9_1c();
		break;
	case 4:
		ex9_1d();
		break;
	case 5:
		ex9_1d_exam1();
		break;
	case 6:
		ex9_2a();
		break;
	case 7:
		ex9_2b();
		break;
	case 8:
		ex9_2c();
		break;
	case 9:
		ex9_2d();
		break;
	case 10:
		//ex9_10();
		break;
	case 11:
		//ex9_11();
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}