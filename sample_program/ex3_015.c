#include <stdio.h>
#include <string.h>

void sortingNumOpe();

int main(){
    int i;
    char array[256];
    int number[256];
    char operator[256];
    
    printf(" -- 整数計算機 --\n");
    printf("input => \n");
    scanf("%s", array);
    sortingNumOpe(strlen(array), array, number, operator);
    for(i = 0; i < len; i++){
        printf("%d\t", number[i]);
        printf("%c\t", operator[i]);
    }

    return 0;
}

void sortingNumOpe(int len, int *p, int *p1, int*p2){
    int i;
    int cnt1;
    int cnt2;
    int tmp;

    cnt1 = 0;
    cnt2 = 0;
    tmp = 0;
    for(i = 0; i < len; i++){
        if('0' <= p[i] && p[i] <= '9'){
            // printf("数字%c\n", p[i]);
            tmp += (int)p[i] - ('0' - 0);
            if('0' <= p[i+1] && p[i+1] <= '9'){
                tmp *= 10;
            }else{
                p1[cnt1] = tmp;
                cnt1 += 1;
                tmp = 0;
            }
        }else{
            // printf("%c\n", p[i]);
            p2[cnt2] = p[i];
            cnt2 += 1;
        }
    }
}