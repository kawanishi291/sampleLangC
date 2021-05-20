/*
hit and blowという数当てゲームがある。出題者は0〜9999の範囲の数字を正解として選ぶ。次に、解答者は予想する数字を言う。
出題者は同じ桁（位置）に同じ数字があればヒット、桁は違うが同じ数字があればブローとして数え、ヒットとブローの数を答える
（3桁以下の数字は頭に0が付いているものとする）。
例えば、次のようになる：
    正解:1234 予想:1234 → 4ヒット（＝クリア）
    正解:1234 予想:5678 → 0ヒット0ブロー
    正解:1234 予想:1892 → 1ヒット1ブロー
    正解:0034 予想:3400 → 0ヒット4ブロー
    正解:1222 予想:1234 → 2ヒット0ブロー（ヒットはブローより優先して判定する）
    正解:1112 予想:1221 → 1ヒット2ブロー
このゲームを3回に分けて作ってみよう。まず、コンピュータは正解となる4つの数字をランダムに選ぶ
（同じ数字を何回使ってもよいし、0で始まってもよい）。次に、プレイヤーに4桁の数字を入力させる。
そして、ヒットの数を数え、表示するプログラムを作成せよ。
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