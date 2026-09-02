//ŠKæ‚ğÄ‹A“I‚É‹‚ß‚é
#include<stdio.h>

//®”’ln‚ÌŠKæ’l‚ğ•Ô‹p
int factorial(int n) {
	if (n > 0) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}

int main() {
	int num;
	printf("®”‚ğ“ü—Í‚¹‚æF");
	scanf("%d", &num);
	printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n", num, factorial(num));

	return 0;
}