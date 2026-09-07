//図形の体積計算プログラム
#include<stdio.h>

typedef struct {
	char syurui;
	double height;
	double width;
	double depth;
} Shape;

//図形の体積を計算
double calculateVolume(Shape s) {
	switch (s.syurui) {
	case 'R':return s.height * s.width * s.depth;
	case 'P':return s.width * s.depth * s.height / 3;
	case 'T':return s.width * s.depth * s.height / 6;
	default: 
		return 0.0;
	}
}

int main() {
	Shape shape[5] = {
		{'T',10,4,5},
		{'P',9,3,2},
		{'R',6,4,3},
		{'P',2,2,2},
		{'T',8,3,3}
	};

	printf("データ一覧:\n");
	for (int i = 0; i < 5; i++) {
		printf("種類: %c,H: %.1lf, W: %.1lf, D:%.1lf\n", shape[i].syurui, shape[i].height, shape[i].width, shape[i].depth);
	}

	int inputID;
	double volume;

	while(1){
	printf("\n図形のIDを入力してください（0～4以外で終了）:");
	scanf("%d", &inputID);

	if (inputID < 0 || inputID>4) {
		printf("プログラムを終了します。\n");
		return 0;
	}
	volume=

	}

}