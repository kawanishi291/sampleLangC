/*
初乗り料金が1700mまで610円、それ以降は313mごとに80円のタクシーがある。このタクシーに乗った距離をm単位で入力し、料金を計算するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int m;
    int price;
    
    printf("距離(m)\n");
    scanf("%d", &m);
    if (m <= 1700) {
        printf("金額 610円\n");
    } else {
        m -= 1700;
        price = 610;
        price += (m / 313) * 80;
        if (m % 313 != 0) {
            price += 80;
        }
        printf("金額 %d円\n", price);
    }
    
    return 0;
}

