/*
1から20まで順に表示するが、5の倍数の場合は数字の代わりにbarと表示するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 5 == 0) {
            printf("bar");
        } else {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}