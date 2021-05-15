/*
{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、
整数値を2つ入力させ、要素番号が入力値である2つの配列要素の値の積を計算して表示するプログラムを作成せよ。
入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。
*/
# include <stdio.h>

int main(){
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int index1;
    int index2;

    printf("input index1:\n");
    scanf("%d", &index1);
    printf("input index2:\n");
    scanf("%d", &index2);
    printf("%d * %d = %2d\n", array[index1], array[index2], array[index1] * array[index2]);
    

    return 0;
}