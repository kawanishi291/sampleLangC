/*
トランプをランダムに順番を変えて表示するプログラムを作成せよ。
トランプは4つのスート（マーク）、1〜13までの数字の52枚である。
トランプを表現する配列を作り、適当に順序を入れ替えていけばよい。
適当に順序を入れ替えるには、例えば2つの入れ替えるカードを乱数を使って選び、それらを入れ替える操作を何回も繰り返せばよい。
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define TRUMPS 52

void FirstSetTrump(int *p);
void ShuffleTrump(int *p);
int ShuffleCount(void);
void ChoiceCards(int *p);
void PrintTrump(int num, int mark);

int main(){
    int trump[TRUMPS + 1];
    int i;

    FirstSetTrump(trump);
    ShuffleTrump(trump);
    for (i = 0; i < TRUMPS; i++) {
        PrintTrump(trump[i] % 13, trump[i] / 13);
    }

    return 0;
}


/* カードを配列にセットする関数 */
void FirstSetTrump(int *p)
{
    int i;

    for (i = 0; i < TRUMPS; i++) {
        p[i] = i+1;
    }
}


/* 選ばれた番号通しを入れ替える関数 */
void ShuffleTrump(int *p)
{
    int random[3];
    int Shuffle_cnt = 100;
    int i;
    int cnt;
    int tmp;

    Shuffle_cnt += ShuffleCount();
    for (i = 0; i < Shuffle_cnt; i++){
        ChoiceCards(random);
        tmp = p[random[0]];
        p[random[0]] = p[random[1]];
        p[random[1]] = tmp;
    }
}


/* 何回入れ替えをするかランダムに決める関数 */
int ShuffleCount(void)
{
    time_t tm;
    int cnt;

    time(&tm);
    srand((unsigned int)tm);
    cnt = 0 + rand() % (TRUMPS - 1);

    return cnt;
}


/* 何番目と何番目を入れ替えるかランダムに決める関数 */
void ChoiceCards(int *p)
{
    int i;
    
    for (i = 0; i < 2; i++) {
        p[i] = 0 + rand() % (TRUMPS);
    }
}


void PrintTrump(int num, int mark)
{
    switch (mark) {
        case 0:
            printf("ダイヤの");
            break;
        case 1:
            printf("ハートの");
            break;
        case 2:
            printf("クローバーの");
            break;
        case 3:
        case 4:
            printf("スペードの");
            break;
    }
    if (num == 1) {
        printf("A");
    } else if (num == 11) {
        printf("J");
    } else if (num == 12) {
        printf("Q");
    } else if (num == 0) {
        printf("K");
    } else {
        printf("%d", num);
    }
    printf("\n");
}