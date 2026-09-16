//ポインタ練習問題
//最大値と最小値を求める
#include<stdio.h>
#define NUM 10

void maxCulc(int array[], int* max);

int main() {
	int data[NUM];
	int max;
	printf("%d個の数字を入力：\n",NUM);
	for (int i = 0; i < NUM; i++) {
		scanf("%d", &data[i]);
	}
	maxCulc(data, &max);
	printf("最大値は%d\n", max);

	return 0;
}

void maxCulc(int array[], int* max) {
	*max = *array; //*arrayはarray[0]と同義
	for (int i = 1; i < NUM ; i++) {
		if (*max < *(array + i)) {
			*max = *(array + i); //*(array+i)はarray[i]と同義
		}
	}
}
