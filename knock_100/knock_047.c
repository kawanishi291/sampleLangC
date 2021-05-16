/*
異なる整数値を2つ入力し、それぞれ別の変数に格納する。
そして、それらの変数の値を入れ替えた後、それぞれの変数の値を表示するプログラムを作成せよ。単に順序を変えて表示するだけではダメ。
必ず変数の値を入れ替えること。下の実行例の場合、まず変数aに2、bに5が入力された状態から、aの値が5、bの値が2になるように入れ替える。
*/
# include <stdio.h>

int main(){
    int a;
    int b;
    int tmp;

    printf("input a:\n");
    scanf("%d", &a);
    printf("input b:\n");
    scanf("%d", &b);
    tmp = a;
    a = b;
    b = tmp;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

