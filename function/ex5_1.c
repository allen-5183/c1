#include <stdio.h>
#include <stdlib.h>
int gcd(int, int);

void ex5_1() {
	int num1, num2;
	printf("��J�G���:");
	scanf("%d %d", &num1, &num2);
	printf("%d �P %d ���̤j���]��: %d\n", num1, num2, gcd((num1>num2)? num1,num2 : num2,num1));
		system("PAUSE");
	return 0;
}

int gcd(int n1, int n2) {
	int n3;
	n3 = n1%n2;
	
	if (n3 != 0)
		return gcd(n2, n3);
	else
		return n2;
}
