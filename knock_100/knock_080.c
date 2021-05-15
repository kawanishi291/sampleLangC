/*
2つの正の整数値を入力させ、互いに素であるか判定するプログラムを作成せよ。
なお、2つの正の整数が互いに素とは、1以外に共通公約数を持たない関係のことである。
*/
#include <stdio.h>

int PrimeNumber(int num);

int main(void) {
    int num1;
    int num2;
    int flag1;
    int flag2;

    printf("2つの値をスペースで区切って入力：\n");
    scanf("%d %d", &num1, &num2);
    flag1 = PrimeNumber(num1);
    flag2 = PrimeNumber(num2);
    if (flag1 == 1 && flag2 == 1) {
        printf("互いに素\n");
    } else {
        printf("互いに素でない\n");
    }

    return 0;
}

int PrimeNumber(int num)
{
    int i;
    int cnt = 0;

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            cnt ++;
        }
    }
    if (cnt == 2) {
        return 1;
    } else {
        return 0;
    }

}