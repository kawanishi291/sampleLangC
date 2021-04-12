#include <stdio.h>

void main(void){
    int array[10];
    int i, num;
    int cnt = 0;

    for(i = 0; i < 10; i++){
        scanf("%d", &num);
        array[i] = num;
        num = 0;
    }
    for(i = 0; i < 10; i++){
        if(array[i] % 2 == 0){
            printf("%d\t", array[i]);
            cnt += 1;
        }
    }
    printf("\n偶数：%d個\n", cnt);
    printf("奇数：%d個\n", 10 - cnt);
}