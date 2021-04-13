#include <stdio.h>

int main(void) {
    int num;

    printf("整数を入力してください\n");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        if(num % 4 == 0){
            printf("4の倍数\n");
        }else{
            printf("4の倍数でない偶数\n");
        }
    }else{
        if(num % 3 == 0){
            printf("3の倍数の奇数\n");
        }else{
            printf("3の倍数でない奇数\n");
        }
    }
}