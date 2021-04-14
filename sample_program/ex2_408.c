#include <stdio.h>


int main(void) {
    int num;
    int cmd;


    num = 8;
    cmd = 1;
    while(cmd != 0){
        printf("変数numの値は%dです\n", num);
        printf("指令 => ");
        scanf("%d", &cmd);
        if(cmd == 1){
            printf("変数の値が2倍になりました");
            num *= 2;
        }else if(cmd == 2){
            printf("変数の値が半分になりました");
            num /= 2;
        }
    }

    return 0;
}