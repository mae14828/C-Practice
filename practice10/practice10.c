//スマホのロック解除もどき（応用編）
#include<stdio.h>
#include<stdlib.h>

int main() {
	int mode, pin, i, input;
	int logged_in = 0;

	while (1) {
		printf("[モード選択]\n");
		printf("1:初期設定\n");
		if (logged_in == 0) {
			printf("2:ロック解除\n");
		}
		printf("0:電源を切る\n");
		printf("選択してください>");
		scanf("%d", &mode);

		if (mode == 1) {
			while (1) {
				printf("4桁のPINコードを入力してください>");
				scanf("%d", &pin);
				if (pin < 1000 || pin>9999) {
					printf("そのPINは登録できません。別のPINを入力してください。\n");
				}
				else {
					FILE* fp = fopen("pin.txt", "w");
					if (fp == NULL) {
						printf("ファイルのオープンに失敗しました。\n");
						break;
					}
					fprintf(fp, "%d", pin);
					fclose(fp);
					printf("登録が完了しました！\n");
					break;
				}
			}

		}
		else if (mode == 2 && logged_in == 0) {
			FILE* fp = fopen("pin.txt", "r");
			if (fp == NULL) {
				printf("PINコードが登録されていません。先に登録してください。\n");
				continue;
			}

			int stored_pin;
			if (fscanf(fp, "%d", &stored_pin) != 1) {
				printf("PINコードの読み込みに失敗しました。\n");
				fclose(fp);
				continue;
			}
			fclose(fp);

			for (i = 1; i <= 5; i++) {
				printf("[ロック画面]\n");
				printf("PINを入力してください(%d/5)>", i);
				scanf("%d", &input);
				if (stored_pin == input) {
					logged_in = 1;
					printf("ロック解除完了！ようこそ！\n");
					break;
				}
				else {
					printf("PINが違います。\n");
					if (i == 5) {
						printf("5回間違えました。\n一定時間後に再試行してください。\n");
					}
				}
			}
		}
		else if (mode == 0) {
			printf("電源を切ります。\n");
			break;
		}
		else {
			printf("無効な選択です。\n");
		}
	}
	return 0;
}
