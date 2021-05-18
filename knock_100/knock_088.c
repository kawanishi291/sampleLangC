/*
コンピュータは1から99の数字をランダムに選ぶ（正解値と呼ぶ）。
プレイヤは値を入力し、正解値と一致すればクリアとなり値を入力した回数を表示する。
一致しなければ正解値が入力値より大きいか小さいかを表示する。この数当てゲームプログラムを作成せよ。
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
    time_t tm;
    int cnt = 0;
    int num;
    int point;
    

    time(&tm);
    srand((unsigned int)tm);
    point = 1 + rand() % 99;
    while (1) {
        cnt ++;
        printf("数を入力:\n");
        scanf("%d", &num);
        if (num == point) {
            printf("正解!! %d回でクリア", cnt);
            break;
        } else if (num < point) {
            printf("それより大きいです\n");
        } else {
            printf("それより小さいです\n");
        }
    }

    return 0;
}
