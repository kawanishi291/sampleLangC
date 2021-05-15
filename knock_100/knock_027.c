/*
整数値を入力させ、1からその値までの総和を計算して表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は0と表示する。
*/
#include <stdio.h>

int main(){
    int num;
    int i;
    int sum = 0;

    printf("input number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);

    return 0;
}