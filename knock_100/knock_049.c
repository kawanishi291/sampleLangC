/*
九九の表を、2重の繰り返しを使って表示するプログラムを作成せよ。
2重の繰り返しを使わず単に表示するだけではダメ。値の間はタブ(\t)を使って間をあけること。
*/
# include <stdio.h>

int main(){
    int i;
    int j;

    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            printf("%2d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}

