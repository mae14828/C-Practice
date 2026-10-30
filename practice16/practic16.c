//単調増加の判定プログラム
#include<stdio.h>
int main() {
	int input, num=0;
	while (1) {
		printf("正の整数を入力してください:");
		scanf("%d", &input);
		if (input < 0) {
			puts("0以下の整数を入力しないでください。");
		}
		else if (input < num) {
			puts("その数は単調増加ではありません。");
			break;
		}
		else {
			puts("その数は単調増加です。");
			num = input;
		}
	}
	return;
 }