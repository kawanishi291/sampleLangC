#include <stdio.h>

double areaOfCircle(double);

int main(void) {
    double num;
    double ans;

    printf("円の半径を入力してください => ");
    scanf("%lf", &num);
    ans = areaOfCircle(num);
    printf("半径%.2fの円の面積は%.2fです\n", num, ans);

    return 0;
}

double areaOfCircle(double radius){
    return radius * radius * 3.14;
}