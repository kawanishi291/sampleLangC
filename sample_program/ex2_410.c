#include <stdio.h>


int main(void) {
    int num;
    int cnt;
    int i;

    cnt = 0;
    printf("整数を入力してください => \n");
    scanf("%d", &num);
    printf("%dの約数 → ", num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
            cnt += 1;
        }
    }
    printf("\n約数は%d個ありました\n", cnt);

    return 0;
}