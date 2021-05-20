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

#define COUNT 4

void SetNumber(int *p);
int CheckHit(int *p, int num);

int main(){
    int NumberList[COUNT];
    int num;
    int hit;

    printf("4桁の数字を入力:\n");
    scanf("%d", &num);
    SetNumber(NumberList);
    hit = CheckHit(NumberList, num);
    printf("%d hit\n", hit);

    return 0;
}

void SetNumber(int *p)
{
    int i;
    time_t tm;
    int num;

    time(&tm);
    srand((unsigned int)tm);
    num = 0 + rand() % 9999;
    printf("target = ");
    for (i = 0; i < COUNT; i++){
        p[i] = num % 10;
        num /= 10;
        printf("%d", p[i]);
    }
    printf("\n");
}

int CheckHit(int *p, int num)
{
    int i;
    int hit = 0;

    for (i = COUNT - 1; i >= 0; i--){
        //printf("%d", p[i]);
        if (p[i] == (num % 10)) {
            hit ++;
        }
        num /= 10;
    }

    return hit;
}