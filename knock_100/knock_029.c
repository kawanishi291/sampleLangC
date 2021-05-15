/*
整数値を5回入力させ、それらの値の合計を表示するプログラムを繰り返しを使って作成せよ。
*/
#include <stdio.h>

int main(){
    int num;
    int i;
    int sum = 0;

    for (i = 0; i < 5; i++) {
        printf("input number:\n");
        scanf("%d", &num);
        sum += num;
    }
    printf("sum = %d\n", sum);

    return 0;
}