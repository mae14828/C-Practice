//スマホのロック解除もどき（基本編）
#include<stdio.h>

int main() {
	int pin_code, input;
	puts("スマートフォンのロック解除ごっこをはじめます！\n");

	while (1) {
		printf("[初期設定]\n");
		printf("4桁のPINコードを登録してください1>");
		scanf("%d", &input);

		if (!(input > 999 && input < 10000)) {
			printf("そのPINは登録できません。別のPINを入力してください。\n");
		}
		else {
			pin_code = input;
			printf("登録が完了しました！\n");
			break;
		}
	}

		for (int i = 0; i < 5; i++) {
			printf("[ロック画面]\n");
			printf("PINを入力してください(%d/5)>", i + 1);
			scanf("%d", &input);

			if (pin_code == input) {
				printf("[ホーム画面]\n");
				printf("ロック解除完了！ようこそ！\n");
				break;
			}
			else {
				printf("PINが違います。\n");
				if (i == 4) {
					printf("５回間違えました。\n一定時間後に再試行してください。\n");
					break;
				}
			}
		}
		return 0;
}