#include <stdio.h>

int main(void) {
    printf("文字列を入力してEnterボタンを押してください\n");
 
    double d;
    scanf("%lf", &d);
 
    printf("入力された数値+1は：%lf\n", d + 1);
 
    return 0;
}