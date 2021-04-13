#include <stdio.h>

int main(void) {
    char str1[] = "円周率";
    char str2[] = "半径の2乗";
    char str3[] = "球の表面積";
    float pai = 3.14159f;

    printf("%sは、%s × %s(%.5f) の4倍です\n", str3, str2, str1, pai);
}