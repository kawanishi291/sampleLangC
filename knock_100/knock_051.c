/*
指定した金額を100円玉と10円玉と1円玉だけで、できるだけ少ない枚数で支払いたい。
金額を入力するとそれぞれの枚数を計算して表示するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int num;

    printf("input money:\n");
    scanf("%d", &num);
    if (num / 100 > 0) {
        printf("100円玉%d枚,", num / 100);
        num %= 100;
    }
    if (num / 10 > 0) {
        printf("10円玉%d枚,", num / 10);
        num %= 10;
    }
    printf("1円玉%d枚\n", num);

    return 0;
}

