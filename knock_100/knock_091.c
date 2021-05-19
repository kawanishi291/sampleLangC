/*
トランプをシャッフルするプログラムはNo.84で作成した。
これを使って、ブラックジャックゲームを作ってみよう。
ブラックジャックは、最初に2枚のカードを配り、2〜10は数字通り、JとQとKは10、Aは1か11として合計し21に近いほど勝ちとなるが、
21を超えると負け（バストと呼ぶ）というゲームである。
まず最初にトランプをシャッフルし、2枚を先頭から順番に引き、それらのカードの数字（マークは無視してよい）と合計値を表示するプログラムを作成せよ。
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define TRUMPS 52
#define FIRST_DRAW 2

void FirstSetTrump(int *p);
void ShuffleTrump(int *p);
int ShuffleCount(void);
void ChoiceCards(int *p);
void PrintTrump(int num, int mark);
void SumNumber(int num);

int sum = 0;

int main(){
    int trump[TRUMPS + 1];
    int i;
    int cnt = FIRST_DRAW + 1;

    FirstSetTrump(trump);
    ShuffleTrump(trump);
    for (i = 0; i < FIRST_DRAW; i++) {
        PrintTrump(trump[i] % 13, trump[i] / 13);
        SumNumber(trump[i] % 13);
    }
    printf("合計%d\n", sum);
    while (sum < 17) {
        printf("もう一枚引きます\n");
        sum = 0;
        for (i = 0; i < cnt; i++) {
            PrintTrump(trump[i] % 13, trump[i] / 13);
            SumNumber(trump[i] % 13);
        }
        cnt ++;
        printf("合計%d\n", sum);
    }
    printf("これでOKです\n");

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

/* トランプの数字表示関数 */
void PrintTrump(int num, int mark)
{
    if (num == 1) {
        printf("A ");
    } else if (num == 11) {
        printf("J ");
    } else if (num == 12) {
        printf("Q ");
    } else if (num == 0) {
        printf("K ");
    } else {
        printf("%d ", num);
    }
}

/* 合計値を計算する関数 */
void SumNumber(int num)
{
    if (num == 0 || num > 10) {
        sum += 10;
    } else if (num == 1) {
        if ((sum + 11) > 21) {
            sum += 1;
        } else {
            sum += 11;
        }
    } else {
        sum += num;
    }
}