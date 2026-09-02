//学生の身長を読み込んで降順にソート
#include<stdio.h>

#define NUMBER 7

void sort(int a[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = n-1; j > i; j--) {
			if (a[j - 1] < a[j]) {
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
}

int main() {
	int height[NUMBER];

	printf("%d人の身長を入力せよ。\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d番：", i + 1);
		scanf("%d", &height[i]);
	}

	puts("降順にソートすると");
	sort(height, NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d番：%d\n", i + 1,height[i]);
	}

	return 0;
}