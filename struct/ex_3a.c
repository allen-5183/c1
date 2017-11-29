#include <stdio.h>
#include <stdlib.h>

void ex_3a()
{
	/* 利用結構陣列存取資料 */
	/*
	   結構陣列初始值設定, 使用大括號 {}, 指定每筆成員的值, 資料之間以逗號 ',' 隔開
	   結構陣列是一般變數, 所以使用 "點"運算子存取結構成員
	   ex: classes[註腳].id, classes[註腳].iname, classes[註腳].score	
	*/
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	/* 定義結構陣列，設定其初值 */
	struct student classes[5] = {
		{ 10811, "John", 88.0 },
		{ 10812, "Mary", 82.0 },
		{ 10813, "Bob", 76.5 },
		{ 10814, "Helen", 91.0 },
		{ 10815, "Peter", 61.5 } };
	
	int i;
	printf("   學生名單如下 \n");
	printf("   ------------\n\n");
	printf("學號   姓名       分數\n");
	
	/* 使用for迴圈將資料印出 */
	for (i = 0; i < 5; i++)
		printf("%d %-10s %5.1f\n",
			classes[i].id,
			classes[i].name,
			classes[i].score);
	//system("PAUSE");
	//return 0;
}
