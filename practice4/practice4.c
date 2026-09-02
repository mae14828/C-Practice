//電子レンジのあたため時間
#include<stdio.h>

int main() {
	int input_min, input_sec, total_sec;
	const int watt[] = { 600,700,1000,1500 };
	int watt_count = sizeof(watt) / sizeof(watt[0]);

	printf("500Wでの温め時間を入力（mm:ss)＞");
	scanf("%d:%d", &input_min, &input_sec);

	total_sec = input_min * 60 + input_sec;

	for (int i = 0; i < watt_count; i++) {
		int converted_total_sec = total_sec * 500 / watt[i];
		int display_min = converted_total_sec / 60;
		int display_sec = converted_total_sec % 60;
		printf("%dWの場合：%d分%d秒\n", watt[i], display_min, display_sec);
	}
	
	return 0;
	
}