//アドレスとポインタで遊んでみる
#include<stdio.h>

int main() {
	int* p;
	int num;
	p = &num;
	*p = 10;

	printf("&num=%p\n", &num);
	printf("p=%p\n", p);
	printf("num=%d\n", num);
	printf("*p=%d\n", *p);

	return 0;
}