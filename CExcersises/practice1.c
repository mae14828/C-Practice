//おつり計算
#include<stdio.h>

int main() {
	int price, payment, change;
	int coins[6] = { 500,100,50,10,5,1 };
	int coin_num;

	//入力の受付
	printf("商品の値段を入力してください: ");
	scanf("%d", &price);
	printf("投入金額を入力してください: ");
	scanf("%d", &payment);

	//不足金額の判定
	if (payment < price) {
		printf("金額が不足しています。\n");
		return 0;
	}

	//おつりの計算
	change = payment-price;
	printf("おつりは%d円です。\n", change);

	//おつりが0円の場合
	if (change == 0) {
		printf("おつりはありません。\n");
		return 0;
	}

	//各硬貨の枚数を計算するループ
	for (int i = 0; i < 6; i++) {
		//該当する硬貨の枚数を計算
		coin_num = change / coins[i];

		//一枚以上ある場合のみ出力
		if (coin_num >= 1) {
			printf("%d円玉:%d枚\n", coins[i], coin_num);
		}

		//残りのおつりを更新
		change = change % coins[i];
	}

	return 0;
}