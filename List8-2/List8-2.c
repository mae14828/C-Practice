//整数の二乗と浮動小数点数の二乗（関数形式マクロ）
#include<stdio.h>

#define sqr(x) ((x)*(x))  //xの二乗値を求める関数形式マクロ

int main() {
	int n;
	double x;

	printf("整数を入力せよ：");
	scanf("%d", &n);
	printf("その数の二乗は%dです\n", sqr(n));

	printf("実数を入力せよ：");
	scanf("%lf", &x);
	printf("その数の二乗は%lfです\n", sqr(x));

	return 0;
}