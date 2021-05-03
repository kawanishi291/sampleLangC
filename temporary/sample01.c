#include <stdio.h>

/*
数学オリンピック

1ページだけ敗れた本がある。敗れていないページの番号を合計すると15000になる。破れたページは何ページ目か。
*/

int main(void){
	int page;
    int sum = 0;
    int i;

    page = 1;
    while (sum < 15000) {
        sum += page;
        page += 1;
    }
    //printf("%dページ(%d)\n", page, sum);
    for (i = 1; i <= page; i++) {
        if (-(2 * i + 1) + sum == 15000) {
            printf("%dページと%dページ\n", i, i+1);
            break;
        }
    }

    return 0;
}