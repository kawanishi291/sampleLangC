/*
整数値を入力させ、1から9まで、入力値と入力値+1以外を表示するプログラムを作成せよ。入力値が9の場合は9のみ表示しない。
*/
# include <stdio.h>

int main(){
    int i;
    int num;

    printf("input number:\n");
    scanf("%d", &num);
    for (i = 1; i <= 9; i++) {
        if (i == num || i == num + 1) {
            ;
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}