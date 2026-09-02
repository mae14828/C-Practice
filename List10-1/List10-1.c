//List10-1
#include<stdio.h>

void sum_diff(int n1, int n2, int sum, int diff);

int main(void) {
	int a, b;
	int wa = 0, sa = 0;

	puts("二つの整数を入力せよ。");
	printf("整数A：");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);

	sum_diff(a, b, wa, sa);

	printf("和は%dで差は%dです。\n", wa, sa);

	return 0;
}

void sum_diff(int n1, int n2, int sum, int diff) {
	sum = n1 + n2;
	diff = n1 > n2 ? n1 - n2 : n2 - n1;
}