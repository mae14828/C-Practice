//学生の身長を読み込んでソート
#include<stdio.h>

#define NUMBER 5

void bsort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i;j--) {
			if (a[j - 1] < a[j]) {
				int tmp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main() {
	int height[NUMBER] = { 0 };
	int height_cpy[NUMBER];
	int i,j,tmp;

	puts("五人の身長を入力せよ。");
	for (i = 0; i < NUMBER; i++) {
		printf("%d番：", i + 1);
		scanf("%d", &height[i]);
	}

	for (i = 0; i < 5; i++) {
		height_cpy[i] = height[i];
	}

	puts("昇順にソートしました。");
	for (i = 0; i < NUMBER-1; i++) {
		for (j = NUMBER - 1; j > i; j--) {
			if (height[j - 1] > height[j]) {
				tmp = height[j];
				height[j] = height[j - 1];
				height[j - 1] = tmp;
			}
		}
	}
	for (i = 0; i < NUMBER; i++)printf("%d番：%d\n", i + 1, height[i]);

	puts("降順にソートしました。");
	bsort(height_cpy, NUMBER);
	for (i = 0; i < NUMBER; i++)printf("%d番：%d\n", i+1,height_cpy[i]);

	return 0;
}