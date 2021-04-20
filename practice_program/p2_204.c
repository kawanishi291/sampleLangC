#include <stdio.h>

enum ANSWER {
    NO,
    YES,
};

int main(void){
    enum ANSWER ans;
    int num;

    ans = NO;
    do {
        printf("\n終了しますか?(0:NO, 1:YES) => \n");
        scanf("%d", &num);
        switch (num) {
            case 0:
                printf("答えが NO なので続行します\n");
                break;
            case 1:
                printf("答えが YES なので終了します\n");
                ans = YES;
                break;
            default:
                printf("許されない答えが入力されました\n");
                break;
        }
    } while (ans == NO);

    return 0;
}