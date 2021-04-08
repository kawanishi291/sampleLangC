#include <stdio.h>

int main(void) {
    printf("文字列を入力してEnterボタンを押してください\n");
 
    double d;
    scanf("%lf", &d);
 
    printf("入力された数値は：%lf\n", d);
 
    return 0;
}