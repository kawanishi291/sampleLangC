#include <stdio.h>


int main(void) {
    int num;
    int cnt, cnt2;
    int i, j;

    printf("整数を入力してください => \n");
    scanf("%d", &num);
    printf("%d以下の素数：", num);
    cnt2 = 0;
    for(j = 2; j <= num; j++){
        cnt = 0;
        for(i = 2; i <= j; i++){
            if(j % i == 0){
                cnt += 1;
            }
        }
        if(cnt < 2){
            printf("%d, ", j);
            cnt2 += 1;
        }
    }
    printf("\n%d個の素数があります\n", cnt2);

    return 0;
}