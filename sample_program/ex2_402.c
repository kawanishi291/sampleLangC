#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    printf("整数を2つ入力してください\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("%d < %d -> %d\n", num1, num2, num1 < num2);
    printf("%d > %d -> %d\n", num1, num2, num1 > num2);
    printf("%d <= %d -> %d\n", num1, num2, num1 <= num2);
    printf("%d >= %d -> %d\n", num1, num2, num1 >= num2);
    printf("%d == %d -> %d\n", num1, num2, num1 == num2);
    printf("%d != %d -> %d\n", num1, num2, num1 != num2);
}