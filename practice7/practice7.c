//•¶š—ñ‚ÉŠÜ‚Ü‚ê‚é’PŒê‚ğ”‚¦‚é
#include<stdio.h>
#include<string.h>

int main() {
	char str[128] = { '\0' };
	char word[128];
	int i, j, flag, count = 0, wordlen;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	gets(str);
	
	printf("ŒŸõ‚·‚é•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	gets(word);
	wordlen = strlen(word);

	for (i = 0; i <= strlen(str) - wordlen; i++) {
		if (str[i] == word[0]) {
			flag = 1;
			for (j = 1; j < wordlen; j++) {
				if (str[i + j] != word[j]) {
					flag = 0;
				}
			}
			if (flag == 1)count++;
		}
	}
	printf("•¶š—ñ%s‚Í%dŒÂŠÜ‚Ü‚ê‚Ü‚·B\n", word, count);
	return 0;
}