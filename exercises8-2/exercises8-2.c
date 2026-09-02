//‰‰K8-2
#include<stdio.h>

#define max(x,y) (((x)>(y))?(x):(y))

int main() {
	int a, b, c, d;
	int first, second;

	printf("a:b:c:d‚Å“ü—Í");
	scanf("%d:%d:%d:%d", &a, &b, &c, &d);

	first = max(max(a, b), max(c, d));
	second = max(max(max(a, b), c), d);

	printf("%d,%d\n", first, second);

	return 0;
}