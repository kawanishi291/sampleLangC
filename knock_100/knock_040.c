/*
整数値を入力させ、その値が偶数ならばeven、奇数ならばoddと表示するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    int num;

    printf("input number:\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("is even.\n");
    } else {
        printf("is odd.\n");
    }
    

    return 0;
}