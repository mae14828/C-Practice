//FizzBuzz表示プログラム
#include<stdio.h>

int main() {
	int i, n;
	printf("整数を入力：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			puts("FizzBuzz");
		}
		else if (i % 3 == 0) {
			puts("Fizz");
		}
		else if (i % 5 == 0) {
			puts("Buzz");
		}
		else {
			printf("%d\n", i);
		}
	}
	return 0;
}