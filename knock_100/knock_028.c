/*
整数値を入力させ、その値の階乗を表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は1と表示する。
*/
#include <stdio.h>

int main(){
    int num;
    int i;
    int factorial = 1;

    printf("input number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("factorial = %d\n", factorial);

    return 0;
}