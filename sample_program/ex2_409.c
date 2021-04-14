#include <stdio.h>


int main(void) {
    int sum;
    int num;

    sum = 0;
    printf("最初の数：%d\n", sum);
    do{
        printf("加算する数 => ");
        scanf("%d", &num);
        printf("\n加算結果： => %d + %d → %d\n", sum, num, num + sum);
        sum += num;
    }while(num != 0);

    return 0;
}