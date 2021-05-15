/*
整数値を入力させ、その個数だけ*を、5個おきに空白（スペース）を入れて表示するプログラムを作成せよ。入力値が0以下の値の場合は何も書かなくてよい。
*/
#include <stdio.h>

int main(){
    int num;
    int i;

    printf("input number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        printf("*");
        if (i % 5 == 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}