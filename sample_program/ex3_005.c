#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int num;
    int prev2, prev1, now;
    
    printf("数値を入力してください \n => \n");
    scanf("%d", &num);
    prev2 = 0;
    prev1 = 1;
    now = prev1 + prev2;
    printf("%d, %d, ", prev2, prev1);
    while(now < num){
        printf("%d, ", now);
        prev2 = prev1;
        prev1 = now;
        now = prev1 + prev2;
    }
    printf("\n");

    return 0;
}