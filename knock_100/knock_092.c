/*
1から50まで順に表示していくが、3の倍数と3のつく数字のときは頭に"aho"と付けて表示するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int i;
    
    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0) {
            printf("aho %d\n", i);
        } else if (i % 10 == 3) {
            printf("aho %d\n", i);
        } else if (30 <= i && i <= 39) {
            printf("aho %d\n", i);
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

