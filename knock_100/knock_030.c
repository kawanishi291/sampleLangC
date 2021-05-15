/*
整数値を入力させ、その個数だけ*を表示するプログラムを作成せよ。入力値が0以下の値の場合は何も書かなくてよい。
*/
#include <stdio.h>

int main(){
    int num;
    int i;

    printf("input number:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}