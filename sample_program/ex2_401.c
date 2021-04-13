#include <stdio.h>

int main(void) {
    double num1;
    double num2;

    printf("実数を2つ入力してください\n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    printf("%lf + %lf -> %lf\n", num1, num2, num1 + num2);
    printf("%lf - %lf -> %lf\n", num1, num2, num1 - num2);
    printf("%lf * %lf -> %lf\n", num1, num2, num1 * num2);
    printf("%lf / %lf -> %lf\n", num1, num2, num1 / num2);
}