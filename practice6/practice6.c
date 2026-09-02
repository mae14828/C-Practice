//商業施設などで保護した迷子情報をまとめる
#include<stdio.h>
#include<string.h>

struct Child {
	char name[20];
	int age;
	char gender[20];
};

int main() {
	struct Child children[5];
	int count = 0;
	char search_name[20];

	//初期入力：最初に三人分の迷子情報を登録
	for (int i = 0; i < 3; i++) {
		printf("%d人目の迷子の情報を入力してください。\n", count + 1);
		printf("名前:");
		scanf("%s", children[i].name);
		printf("年齢:");
		scanf("%d", &children[i].age);
		//性別の入力チェック
		while (1) {
			printf("性別(M/F):");
			scanf("%s", children[i].gender);
			if (strcmp(children[i].gender, "M") == 0 || strcmp(children[i].gender, "F") == 0) {
				break;
			}
			else {
				printf("MまたはFを入力してください。\n");
			}
		}
		//登録している迷子の数を増やす
		count++;
	}

	//名前による検索ループ
	while (1) {
		printf("\n探している迷子の名前を入力してください(0で終了):");
		scanf("%s", search_name);

		if (strcmp(search_name, "0")==0) {
			printf("プログラムを終了します。\n");
			break;
		}
		//for文の中で迷子がいたら1とする
		int found = 0;

		for (int i = 0; i < count; i++) {
			if (strcmp(children[i].name, search_name) == 0) {
				printf("見つかりました！\n");
				printf("名前：%s, 年齢: %d, 性別: %s\n",
					children[i].name, children[i].age, children[i].gender);
				found = 1;
				break;
			}
		}
		//見つからなければ迷子情報に追加
		if (found == 0) {
			if (count >= 5) {
				printf("これ以上迷子を登録できません。\n");
				continue;
			}
			printf("その名前の迷子は見つかりませんでした。\n");
			printf("迷子情報として登録します。\n");
			strcpy(children[count].name, search_name);

			printf("年齢:");
			scanf("%d", &children[count].age);

			//性別の入力チェック
			while (1) {
				printf("性別(M/F):");
				scanf("%s", children[count].gender);
				if (strcmp(children[count].gender, "M") == 0 || strcmp(children[count].gender, "F") == 0) {
					break;
				}
				else {
					printf("MまたはFを入力してください。\n");
				}
			}
			count++;
			printf("登録が完了しました。\n");
		}
	}
}