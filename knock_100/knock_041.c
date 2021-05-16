/*
整数値を入力させ、その値が一桁の自然数かそうでないか判定するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int num;

    printf("input number:\n");
    scanf("%d", &num);
    if (0 < num && num < 10) {
        printf("%d is a single figure.\n", num);
    } else {
        printf("%d is not a single figure.\n", num);
    }
    

    return 0;
}