/*
神山美術館の入場料金は、一人600円であるが、5人以上のグループなら一人550円、20人以上の団体なら一人500円である。
人数を入力し、入場料の合計を計算するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int peoples;
    int price = 0;
    
    printf("人数\n");
    scanf("%d", &peoples);
    if (peoples >= 20) {
        price = peoples * 500;
    } else if (peoples >= 5) {
        price = peoples * 550;
    } else {
        price += peoples * 600;
    }
    printf("料金 %d\n", price);

    return 0;
}

