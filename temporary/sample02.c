#include <stdio.h>

int main(void){
    int num;
    int i;
    int j;

    printf("数値入力\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}