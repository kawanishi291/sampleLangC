/*
{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、
整数値を入力させ、要素番号が入力値である配列要素の値を表示するプログラムを作成せよ。
入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。
*/
# include <stdio.h>

int main(){
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int i;

    printf("input number:\n");
    scanf("%d", &i);
    printf("array[%d] = %d\n", i, array[i]);
    

    return 0;
}