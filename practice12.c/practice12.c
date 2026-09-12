//アドレスで遊んでみる
#include<stdio.h>
#include<string.h>

int main() {
	char array[5] = "2468";

	printf("array[5]=\"2468\"\n");
	for (int i = 0; i < strlen(array)+1; i++) {
		printf("array[%d]=%c\n", i, array[i]);
	}
	for (int i = 0; i < strlen(array)+1; i++) {
		printf("&array[%d]=%p\n", i, &array[i]);
	}
	printf("printf(\"%%s\\n\", &array[1]); >>> %s\n" , &array[1]);//そのアドレスから\0が見つかるまで読む
	printf("printf(\"%%s\\n\", &array[1] + 1); >>> %s\n", &array[1] + 1);
	printf("printf(\"%%c\\n\", array[1]); >>> %c\n", array[1]);//その配列の中身だけ読む、いつもの

	return 0;
}