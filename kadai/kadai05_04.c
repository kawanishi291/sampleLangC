#include <stdio.h>
  
int main(){
    int num;

    printf("数値を入力してください => \n");
    scanf("%d", &num);
    while (num < 0) {
        printf("正の数値を入力してください => \n");
        scanf("%d", &num);
    }
    while (num > 0) {
        printf("%d, ", num);
        num --;
    }
    printf("0");
    

    return 0;
}