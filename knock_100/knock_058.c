/*
0以上の整数値を5つ入力させ、それぞれの値に対して、次の形式でグラフを描くプログラムを作成せよ。
形式：左端に値を表示し、適切に空白を空けて":"を書く（:で揃えるためにタブ\tを使うとよい）。
その後ろに値の数だけ*を描くが、5個おきに空白を１つ入れる。具体例は下記の実行例を参照すること。
*/
# include <stdio.h>

int main(){
    int i;
    int j;
    int Array[5];
    
    for (i = 0; i < 5; i++) {
        printf("input input data[%d]:\n", i);
        scanf("%d", &Array[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%d\t:", Array[i]);
        for(j = 1; j <= Array[i]; j++) {
            if (j % 5 == 0) {
                printf("* ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

