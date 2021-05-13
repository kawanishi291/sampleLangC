#include <stdio.h>

int main(){
    int month;

    printf("月を入力して下さい => \n");
    scanf("%d", &month);
    switch (month) {
        case 2:
        case 3:
        case 4:
            printf("春\n");
            break;
        case 5:
        case 6:
        case 7:
            printf("夏\n");
            break;
        case 8:
        case 9:
        case 10:
            printf("秋\n");
            break;
        case 1:
        case 11:
        case 12:
            printf("冬\n");
            break;
        default:
            printf("error\n");
    }

    return 0;
}