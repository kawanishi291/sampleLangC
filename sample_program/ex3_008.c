#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void numToChar(int);
void winOrLose(int, int);

int main(void) {
    time_t tm;
    int num;
    int r;

    time(&tm);
    srand((unsigned int)tm);
    r = 1 + rand() % 3;
    printf("1:グー, 2:チョキ, 3:パー\nじゃんけんポイ! => \n");
    scanf("%d", &num);
    printf("\nあなたは");
    numToChar(num);
    printf("です\n");
    printf("相手は");
    numToChar(r);
    printf("です\n");
    printf("\n");
    winOrLose(num, r);

    return 0;
}


void numToChar(int num){
    switch(num){
        case 1:
            printf("グー");
            break;
        case 2:
            printf("チョキ");
            break;
        case 3:
            printf("パー");
            break;
        default:
            printf("%d\n", num);
            break;
    }
}

void winOrLose(int my, int cpu){
    if(my - cpu == 0){
        printf("この勝負、引き分けです\n");
    }else if(my == 1){
        if(cpu == 2){
            printf("この勝負、あなたの勝ちです\n");
        }else{
            printf("この勝負、あなたの負けです\n");
        }
    }else if(my == 2){
        if(cpu == 3){
            printf("この勝負、あなたの勝ちです\n");
        }else{
            printf("この勝負、あなたの負けです\n");
        }
    }else if(my == 3){
        if(cpu == 1){
            printf("この勝負、あなたの勝ちです\n");
        }else{
            printf("この勝負、あなたの負けです\n");
        }
    }
}