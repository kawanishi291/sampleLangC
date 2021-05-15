/*
整数値を2つ入力させ、1つめの値を2つめの値で割った結果を表示し、続けてその結果に2つめの値を掛けた結果を表示するプログラムを作成せよ。
計算はすべて整数型で行うこと（割り切れない場合は自動的に小数点以下が切り捨てられる）。
*/
#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("input 1st value:\n");
    scanf("%d", &num1);
    printf("input 2st value:\n");
    scanf("%d", &num2);
    printf("result: %d\n", num1 / num2);
    printf("result: %d\n", (num1 / num2) * num2);

    return 0;
}