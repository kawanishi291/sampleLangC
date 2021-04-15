#include <stdio.h>

void toSquaringCube(int, int *, int *);

int main(void) {
    int num;
    
    printf("整数を入力してください => ");
    scanf("%d", &num);
    toSquaringCube(num, &num, &num);

    return 0;
}

void toSquaringCube(int value, int *squaring, int *cube){
    *squaring = value * value;
    *cube = value * value;
    printf("%dの2乗は%d、3乗は%dです\n", value, *squaring, *cube);
}