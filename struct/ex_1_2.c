#include <stdio.h>
#include <stdlib.h>

void ex_1_2()
{
	/*
	定義結構變數後, 要存取結構成員, 需用運算子 '.' 來指定要存取哪一個結構成員(欄位)
	*/

	/* 宣告結構triangle的型態，以成員運算子" . "存取結構結構成員*/
	struct S
	{
		char name[20];
		int score;
	};
	struct S stu = {"iPad nano", 98};

	printf("學生的姓名: %s\n", stu.name);
	printf("成績為:     %d\n", stu.score);

	//system("PAUSE");
	//return 0;
}