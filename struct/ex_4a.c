#include <stdio.h>
#include <stdlib.h>

void ex_4a()
{
	/* 宣告結構型態 */
	struct student
	{
		char name[20];   /* 姓名 */
		int score;      /* 分數 */
	};
	struct student *ptr;  /* 定義結構指標ptr */
						  /* 使用malloc( )函數配置記憶體 */
	ptr = (struct student *) malloc(sizeof(struct student));
	printf("請輸入學生的姓名: ");
	gets(ptr->name);  /* 輸入姓名 */
	printf("請輸入學生的成績: ");
	scanf("%d", &ptr->score);  /* 輸入分數 */
	printf("\n學生的姓名是 %s\n", ptr->name);  /* 輸出姓名 */
	printf("成績為 %d\n", ptr->score);  /* 輸出分數 */
	//system("PAUSE");
	//return 0;
}
