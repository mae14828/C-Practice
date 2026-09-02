//ポインタによって値の変更を依頼
#include<stdio.h>

void set999(int* p) {
	*p = 999;
}

int main() {
	int x = 123;
	int y = 456;
	int sw;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("変更するのは x or y (0or1) = ");
	scanf("%d", &sw);

	if (sw == 0) {
		set999(&x);
	}
	else {
		set999(&y);
	}

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}