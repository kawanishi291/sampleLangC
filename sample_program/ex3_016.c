#include <stdio.h>
#include <string.h>

int getNumber(char *prompt, int min, int max);
int yourTurn(int max, int total);
int cpuTurn(int max, int total);

int main(void){
    int total;
    int max;
    int flag;
    int cmd; // 0:CPU, 1:YOU
    char prompt[100];

    strcpy(prompt, "石の全体数(2〜1000)を設定してください => \n");
    total = getNumber(prompt, 2, 1000);
    strcpy(prompt, "最大取得数を設定してください => \n");
    max = getNumber(prompt, 1, total);
    strcpy(prompt, "先攻(0)、後攻(1)を入力してください => \n");
    flag = getNumber(prompt, 0, 1);
    if (flag == 0) {
        printf("先攻です\n");
        while (total > 1) {
            total = yourTurn(max, total);
            printf("\n");
            if (total == 1) {
                cmd = 1;
                break;
            }
            total = cpuTurn(max, total);
            printf("\n");
        }
    } else {
        printf("後攻攻です\n");
        while (total > 1) {
            total = cpuTurn(max, total);
            printf("\n");
            if (total == 1) {
                cmd = 0;
                break;
            }
            total = yourTurn(max, total);
            printf("\n");
        }
    }
    if (cmd == 0) {
        strcpy(prompt, "YOU LOSE! \n");
    } else if (cmd == 1) {
        strcpy(prompt, "YOU WIN! \n");
    }
    printf("1個の石が残りました!!\n%s", prompt);
    

    return 0;
}

int getNumber(char *prompt, int min, int max)
{
    int num = -1;

    printf("%s", prompt);
    while (num == -1) {
        scanf("%d", &num);
        if (num < min || max < num) {
            printf("%d~%dで入力してください\n", min, max);
            num = -1;
        }
    }
    
    return num;
}

int yourTurn(int max, int total)
{
    int num = -1;

    printf("あなたのターンです\n残りの石の数は%d個です\nいくつの石を取りますか(1〜%d) => \n", total, max);
    while (num == -1) {
        scanf("%d", &num);
        if (num < 1 || max < num) {
            printf("1~%dで入力してください\n", max);
            num = -1;
        } else if (total - num < 0) {
            printf("%d以下で入力してください\n", total);
            num = -1;
        }
    }
    
    return total - num;
}

int cpuTurn(int max, int total)
{
    int num = 1;

    while (num < total) {
        num += (max + 1);
    }
    num -= (max + 1);
    if (num < total - max) {
        num = total - 1;
    }
    printf("CPUのターンです\n残りの石の数は%d個です\nCPUは%d個の石を取りました\n", total, total - num);

    return num;
}