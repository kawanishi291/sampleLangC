#include <stdio.h>

void main(){
    int num;
    int i;

    printf("数字を1文字を入力してください => \n");
    scanf("%d", &num);
    
    for (i = 1; i <= 4; i++) {
        printf("%d回目：%d\n", i, num + i);
    }

}