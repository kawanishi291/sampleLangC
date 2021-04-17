#include <stdio.h>

int inputScore(int *);
void printScore();

int main(){
    int array[10+1];
    int end;

    end = inputScore(array);
    printf("\n");
    printScore(end, array);

    return 0;
}


int inputScore(int *p){
    int i;
    int num;
    int cnt = 0;
    int flag = 1;

    printf("< 入力モード >\n");
    while(cnt < 10){
        if(flag){
            if(cnt > 0){
                printf(">>> ");
            }
            printf("0~10までの数値を10回入力してください\n");
        }
        printf("input => \n");
        scanf("%d", &num);
        if(num == 0){
            break;
        }else if(num > 10){
            flag = 1;
        }else{
            p[cnt] = num;
            cnt += 1;
            flag = 0;
        }
    }

    return cnt;
}

void printScore(int end, int *p){
        int i;
        int j;

    printf("< 出力モード >\n");
    for(i = 10; 0 < i; i--){
        printf("%2d|",i);
        for(j = 0; j < end; j++){
            if(p[j] >= i){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    if(end == 10){
        printf("--+--------------------\n");
        printf("  | 1 2 3 4 5 6 7 8 9 0\n");
    }else{
        printf("--+");
        for(j = 0; j < end; j++){
            printf("--");
        }
        printf("\n  |");
        for(j = 0; j < end; j++){
            printf("%2d", j + 1);
        }
        printf("\n");
    }
}