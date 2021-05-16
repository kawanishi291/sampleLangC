/*
整数値を3つ入力させ、それらの値が小さい順（等しくてもよい）に並んでいるか判定し、
小さい順に並んでいる場合はOK、そうなっていない場合はNGと表示するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("input number1:\n");
    scanf("%d", &num1);
    printf("input number2:\n");
    scanf("%d", &num2);
    printf("input number3:\n");
    scanf("%d", &num3);
    if (num1 <= num2 && num2 <= num3) {
        printf("OK\n");
    } else {
        printf("NG \n");
    }
    

    return 0;
}