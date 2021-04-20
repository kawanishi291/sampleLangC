#include <stdio.h>

/* 関数プロトタイプ宣言 */
int savingsBox(int);

int main(void){
    int balance;
    int amount;

    for (;;) {
        printf("貯金箱 => \n");
        scanf("%d", &amount);
        if (amount == 0) {
            break;
        } else {
            balance = savingsBox(amount);
            printf("貯金箱に貯まった金額：%d円\n", balance);
        }
    };

    return 0;
}

int savingsBox(int amount){
    static int balance;

    return balance += amount;
}