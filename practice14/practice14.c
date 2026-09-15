//ポインタ練習問題
//最大値と最小値を求める
#include<stdio.h>
#define NUM 10

int max(int array[]);

int main() {
	int data[NUM];
	printf("%d個の数字を入力：\n",NUM);
	for (int i = 0; i < NUM; i++) {
		scanf("%d", &data[i]);
	}
	max(data);

	return 0;
}

int max(int array[]) {
	for (int i = 0; i < NUM-1; i++) {
		for (int j = 0 ; j < NUM-i-1; j++) {
			if (array[j] < array[j + 1]) {
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	printf("最大値は%d\n",array[0]);
	return 0;
}
