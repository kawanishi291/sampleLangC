/*
自然数の入力値を素因数分解して結果を表示するプログラムを作成せよ。
まず2で割り切れる間は割っていき、2で割り切れなくなったら3で、と、割る数を1ずつ大きくしながら繰り返す。
*/
# include <stdio.h>

int main(){
    int num;
    int prime_num = 2;


    printf("input year:\n");
    scanf("%d", &num);
    while (num != 1) {
        if (num % prime_num == 0) {
            printf("%d ", prime_num);
            num /= prime_num;
        } else {
            prime_num ++;
        }
    }

    return 0;
}

/*
int main(){
    int num;
    int prime_numbers[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int i;
    int flag;

    printf("input year:\n");
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        flag = 0;
        while (flag == 0) {
            if (num % prime_numbers[i] == 0) {
                num /= prime_numbers[i];
                printf("%d ", prime_numbers[i]);
            } else {
                flag = 1;
            }
        }
        if (num == 1) {
            break;
        }
    }
    if (num == 1) {
        printf("\n");
    } else {
        printf("%d\n", num);
    }
    

    return 0;
}
*/