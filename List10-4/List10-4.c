//ポインタの指す先を実行時に決定
#include<stdio.h>

int main() {
	int x = 123;
	int y = 456;
	int sw;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("変更するのは [xなら0/yなら1] = ");
	scanf("%d", &sw);

	int* p;
	if (sw == 0) {
		p = &x;
	}
	else {
		p = &y;
	}

	*p = 999;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}
