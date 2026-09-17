//ポインタ練習問題
//最大値と最小値を求める
#include<stdio.h>
#define NUM 10

void maxMinCulc(int array[], int* max, int* min);

int main() {
	int data[NUM];
	int max, min;
	printf("%d個の数字を入力：\n",NUM);
	for (int i = 0; i < NUM; i++) {
		scanf("%d", &data[i]);
	}
	maxMinCulc(data, &max, &min);
	printf("最大値は%d\n最小値は%d\n", max, min);

	return 0;
}

void maxMinCulc(int array[], int* max, int* min) {
	*max = *array; //*arrayはarray[0]と同義
	*min = *array;
	for (int i = 1; i < NUM ; i++) {
		if (*max < *(array + i)) {
			*max = *(array + i); //*(array+i)はarray[i]と同義
		}
		if (*min > *(array + i)) {
			*min = *(array + i);
		}
	}
}
