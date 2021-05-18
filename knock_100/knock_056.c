/*
0〜65535の整数値を入力させ、入力値を16桁の2進数に変換して表示するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int i;
    int cnt = 0;
    int BinaryArray[16];
    int num;
    
    printf("input number:\n");
    scanf("%d", &num);
    for (i = 0; num > 0; i++) {
        BinaryArray[i] = num % 2;
        num /= 2;
        cnt ++;
    }
    for (i = 0; i < (16 - cnt); i++) {
        printf("0");
    }
    for (i = (cnt - 1); i >= 0; i--) {
        printf("%d", BinaryArray[i]);
    }

    return 0;
}

