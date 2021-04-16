#include <stdio.h>

int main () {
    int i;
    int num;

    printf("数値を入力してください\n");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        if(i % 15 == 0){
            printf("FizzBuzz");
        }else if(i % 3 == 0){
            printf("Fizz");
        }else if(i % 5 == 0){
            printf("Buzz");
        }else{
            printf("%d", i);
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}