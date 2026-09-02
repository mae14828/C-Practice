//二つの整数値を交換
#include<stdio.h>

//xとyが指すオブジェクトの値の交換
void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a, b;

	puts("二つの整数を入力せよ。");
	printf("整数A；");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);

	swap(&a, &b);

	puts("これらの値を交換しました。");
	printf("整数A：%d\n", a);
	printf("整数B；%d\n", b);

	return 0;

}