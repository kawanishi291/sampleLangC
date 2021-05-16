/*
1から100までの値を繰り返しで表示するが、3の倍数の時はfoo、5の倍数の時はbarと数字の代わりに表示するプログラムを作成せよ。
なお、3と5の両方の倍数の時はfoobarと表示される。
*/
# include <stdio.h>

int main(){
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("foobar\n");
        } else if (i % 3 == 0) {
            printf("foo\n");
        } else if (i % 5 == 0) {
            printf("bar\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

