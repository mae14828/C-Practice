//しりとり判定
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char word1[50];
	char word2[50];

	printf("しりとりの最初の単語を入力してください:\n");
	scanf("%s", word1);

	for (int i = 0; i < strlen(word1); i++) {
		word1[i]=toupper(word1[i]);
	}
	
	while (1) {
		printf("次の単語を入力してください:\n");
		scanf("%s", word2);

		for (int i = 0; i < strlen(word2); i++) {
			word2[i]=toupper(word2[i]);
		}

		if (word1[strlen(word1)-1] != word2[0]) {
			printf("ゲーム終了\n");
			break;
		}
		else {
			strcpy(word1, word2);
		}
	}
	return 0;
}