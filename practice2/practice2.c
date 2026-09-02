//世界のナベアツ
#include<stdio.h>
#include<stdbool.h>

bool hasThree(int n);

int main() {
	for (int i = 1; i <= 40; i++) {
		if (i % 3 == 0 || hasThree(i)) {
			printf("\x1b[1m\x1b[31m%d !!!\x1b[0m\n", i);
		}
		else {
			printf("%d ...\n", i);
		}
	}
	return 0;
}

bool hasThree(int n) {
	if (n % 10 == 3 || n / 10 == 3) {
		return true;
	}
	else {
		return false;
	}
}