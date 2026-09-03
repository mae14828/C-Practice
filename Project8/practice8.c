//³‘½ŠpŒ`‚Ì“àŠp‚Ì˜a
#include<stdio.h>

int sum_of_angles(int n);

int main() {
	int num;

	printf("’¸“_‚Ì”‚ğ“ü—Í:");
	scanf("%d", &num);

	if (num < 3) {
		puts("3ˆÈã‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
		return 1;
	}

	printf("³%dŠpŒ`‚Ì“àŠp‚Ì˜a‚Í%d‹", num, sum_of_angles(num));
	return 0;
}

int sum_of_angles(int n) {
	int a;
	a = 180 * (n - 2);
	return a;
}