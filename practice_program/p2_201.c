#include <stdio.h>

/* グローバル変数 */
int value_a;

/* 関数プロトタイプ宣言 */
int func(int);

int main(void){

    value_a = 10;
    printf("(mainで表示) value_a%d\n", value_a);
    value_a = func(value_a);
    printf("(mainで表示) value_a%d\n", value_a);

    return 0;
}

int func(int value_x){
    int value_a;

    value_a = value_x;
    value_a += 10;
    printf("(funcで表示) value_x%d\n", value_x);
    printf("(funcで表示) value_a%d\n", value_a);

    return value_a + 10;
}