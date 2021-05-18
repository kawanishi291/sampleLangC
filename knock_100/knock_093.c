/*
まず開始値と終了値をそれぞれ入力させる。次に、開始値から終了値まで順に、3の倍数と3のつく数字のときは頭に"aho"と付けて表示するプログラムを作成せよ。
開始値と終了値の値の妥当性（例えば終了値の方が開始値よりも大きいか）チェックは省略してよい。
*/
# include <stdio.h>

int main(){
    int i;
    int start;
    int end;
    
    printf("start:\n");
    scanf("%d", &start);
    printf("end:\n");
    scanf("%d", &end);
    for (i = start; i <= end; i++) {
        if (i % 3 == 0) {
            printf("aho %d\n", i);
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

