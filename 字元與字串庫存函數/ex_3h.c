/* file name: ex10-3h.c */
#include <stdio.h>
char *message(int);  /* ㄧ计 */
int main( )
{
	char *info;
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);
	/* ㊣message( )ㄧ计info钡肚 */
	info = message(input);
	puts(info);
	return 0;
}

/* 沮把计num┪单0肚ぃ癟 */
char *message(int num)
{
	if(num > 0)
		return "Number is positive";
	else if(num < 0)
		return "Number is negative";
	else
		return "Number is zero";
}
