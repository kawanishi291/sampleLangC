#include <stdio.h>
  
int main(){
    int num;
    int i = 1;
    int j;
    int b;
    int cnt = 1;
    int blank = 0;

    printf("数値を入力してください => \n");
    scanf("%d", &num);
    while (i < num) {
        i++;
        cnt += 2;
    }
    for (i = num; i > 0; i--) {
        for (b = 0; b < blank; b++) {
            printf(" ");
        }
        for (j = 0; j < cnt; j++) {
            printf("*");
        }
        cnt -= 2;
        blank ++;
        printf("\n");
    }
    

    return 0;
}