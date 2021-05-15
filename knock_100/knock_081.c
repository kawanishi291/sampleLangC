/*
３つの整数値を入力させ、3つの値のうち2番目に大きい値を表示するプログラムを作成せよ。
*/
#include <stdio.h>

void SortBigSmall(int *p1, int *p2);

int main(void) {
    int num1;
    int num2;
    int num3;
    int tmp;

    printf("3つの値をスペースで区切って入力：\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    SortBigSmall(&num1, &num2);
    SortBigSmall(&num2, &num3);
    SortBigSmall(&num1, &num2);
    printf("%d", num2);

    return 0;
}

void SortBigSmall(int *p1, int *p2)
{
    int tmp;

    if (*p1 > *p2) {
        tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
    }
}