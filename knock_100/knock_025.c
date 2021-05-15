/*
整数値を入力させ、その値が-10未満ならrange 1、-10以上0未満であればrange 2、0以上であればrange 3、と表示するプログラムを作成せよ。
*/
#include <stdio.h>

int main(){
    int num;

    printf("input number:\n");
    scanf("%d", &num);
    if (num < -10) {
        printf("range 1\n");
    } else if (-10 <= num && num < 0) {
        printf("range 2\n");
    } else if (0 <= num) {
        printf("range 3\n");
    }

    return 0;
}