#include <stdio.h>

int main(void) {
    int num;

    printf("整数を入力してください\n");
    scanf("%d", &num);
    
    if(num % 3 == 0){
        printf("%dは3の倍数です\n", num);
    }else{
        printf("%dは3の倍数ではありません\n", num);
    }
    if(num % 5 == 0){
        printf("%dは5の倍数です\n", num);
    }else{
        printf("%dは5の倍数ではありません\n", num);
    }
}