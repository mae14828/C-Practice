//ポインタ練習問題
//最大値と最小値を求める
#include<stdio.h>
#define NUM 5


int main() {
	int data[NUM];
	printf("%d個の数字を入力：\n",NUM);
	for (int i = 0; i < NUM; i++) {
		scanf("%d", &data[i]);
	}
	return 0;
}