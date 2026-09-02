//日付を前の日/次の日の日付に更新する関数
#include<stdio.h>

void decrement_date(int* y, int* m, int* d) {
	int days_in_month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (*y % 400 == 0) {
		days_in_month[2] = 29;
		if (*d + 1 <= days_in_month[*m]) {
			*d = *d + 1;
		}
		else {
			*d = 1;
			*m =*m + 1;
			if (*m == 13) {
				*m = 1;
				*y = *y + 1;
			}
		}
	}
	else if (*y % 100 == 0) {
		if (*d + 1 <= days_in_month[*m]) {
			*d = *d + 1;
		}
		else {
			*d = 1;
			*m = *m + 1;
			if (*m == 13) {
				*m = 1;
				*y = *y + 1;
			}
		}
	}
	else if (*y % 4 == 0) {
		days_in_month[2] = 29;
		if (*d + 1 <= days_in_month[*m]) {
			*d = *d + 1;
		}
		else {
			*d = 1;
			*m = *m + 1;
			if (*m == 13) {
				*m = 1;
				*y = *y + 1;
			}
		}
	}
	else {
		if (*d + 1 <= days_in_month[*m]) {
			*d = *d + 1;
		}
		else {
			*d = 1;
			*m = *m + 1;
			if (*m == 13) {
				*m = 1;
				*y = *y + 1;
			}
		}
	}
}

void increment_date(int* y, int* m, int* d) {
}