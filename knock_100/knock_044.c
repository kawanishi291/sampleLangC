/*
換算したい金額（円単位）と1ドル何円かを整数値で入力すると、入力した金額が何ドル何セントか計算して表示するプログラムを作成せよ。
1セントは1/100ドルである。結果は整数値でよい（1セント未満の端数切り捨て）。

何円? 10000
1ドルは何円? 120
10000円は83ドル33セント
*/
# include <stdio.h>

int main(){
    int yen;
    int rate;
    double tmp;
    
    printf("何円?\n");
    scanf("%d", &yen);
    printf("1ドルは何円?\n");
    scanf("%d", &rate);
    tmp = 1.0 / rate;
    tmp *= yen;
    printf("%d円は%dドル%dセント\n", yen, (int)tmp, (int)((tmp - (int)tmp) * 100));
    
    return 0;
}

