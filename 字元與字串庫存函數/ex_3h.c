/* file name: ex10-3h.c */
#include <stdio.h>
char *message(int);  /* ��ƭ쫬�ŧi */
int main( )
{
	char *info;
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);
	/* �I�smessage( )��ơA�Hinfo���^�Ǧ^�� */
	info = message(input);
	puts(info);
	return 0;
}

/* �ھڰѼ�num�j��B�p��ε���0�Ǧ^���P���T�� */
char *message(int num)
{
	if(num > 0)
		return "Number is positive";
	else if(num < 0)
		return "Number is negative";
	else
		return "Number is zero";
}
