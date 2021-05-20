/*
No.95に続いて、正解と一致するまで繰り返して予想させるようにしてゲームを完成させよう。
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 4

void SetNumber(int *p);
void InputNumber(int *ip);
int CheckHit(int *p, int *cp, int *ip);
int CheckBlow(int *p, int *cp, int *ip);

int main(){
    int NumberList[COUNT];
    int CopyList[COUNT];
    int InputList[COUNT];
    int hit = 0;
    int blow;

    SetNumber(NumberList);
    while (hit != 4){
        InputNumber(InputList);
        hit = CheckHit(NumberList, CopyList, InputList);
        blow = CheckBlow(NumberList, CopyList, InputList);
        if (hit == 4) {
            break;
        } else {
            printf("%d hit, %d blow\n", hit, blow);
        }
    }
    printf("正解\n");

    return 0;
}

void SetNumber(int *p)
{
    int i;
    time_t tm;
    int num;

    time(&tm);
    srand((unsigned int)tm);
    num = 0 + rand() % 9999;
    // printf("target = ");
    for (i = 0; i < COUNT; i++){
        p[i] = num % 10;
        num /= 10;
        // printf("%d", p[i]);
    }
    // printf("\n");
}

void InputNumber(int *ip)
{
    int i;
    int num;

    printf("4桁の数字を入力:\n");
    scanf("%d", &num);
    for (i = COUNT - 1; i >= 0; i--) {
        ip[i] = num % 10;
        num /= 10;
    }
}

int CheckHit(int *p, int *cp, int *ip)
{
    int i;
    int hit = 0;

    for (i = 0; i < COUNT; i++){
        //printf("%d", p[i]);
        if (p[i] == ip[i]) {
            hit ++;
            cp[i] = -1;
            ip[i] = -2;
        } else {
            cp[i] = p[i];
        }
    }

    return hit;
}

int CheckBlow(int *p, int *cp, int *ip)
{
    int i;
    int j;
    int blow = 0;

    for (i = 0; i < COUNT; i++) {
        for (j = 0; j < COUNT; j++) {
            if (cp[i] == ip[j] && cp[i] != -1) {
                blow ++;
                ip[j] = -2;
            }
        }
    }

    return blow;
}