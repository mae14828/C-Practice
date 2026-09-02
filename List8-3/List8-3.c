//警報を発した上で表示を行うマクロ
#include<stdio.h>

#define puts_alert(str) {putchar('\a');puts(str);}

int main() {
	int n;

	printf("整数を入力せよ：");
	scanf("%d", &n);

	if (n) {
		puts_alert("その数は0ではありません\n");
	}
	else {
		puts_alert("その数は0です\n");
	}
	return 0;
}