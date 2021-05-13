#include <stdio.h>

int main(){
    int month;

    printf("月を入力して下さい => \n");
    scanf("%d", &month);
    if (2 <= month && month <= 4) {
        printf("春\n");
    } else if (5 <= month && month <= 7) {
        printf("夏\n");
    } else if (8 <= month && month <= 10) {
        printf("秋\n");
    } else if (11 <= month && month <= 1) {
        printf("冬\n");
    } else {
        printf("エラー\n");
    }

    return 0;
}