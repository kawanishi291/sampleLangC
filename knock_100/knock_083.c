/*
 〜 次の仕様のじゃんけんプログラムを作成せよ。〜
・人間は、グー、チョキ、パーをそれぞれ0、1、2の数字で入力する。
・コンピュータは乱数を使って出す手を選ぶ。乱数の使い方は演習資料の高度なテクニック集を見よ。
・5回勝負として、人間とコンピュータの勝った回数を数え、勝敗がつくたびに1回ずつ表示する。あいこは決着がつくまで再勝負。途中でどちらかが3勝しても、5回最後まで勝負を続ける。
・指定された範囲以外の値を入力したら負けにする
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int choiceNum(void);
void CPUturn(int num);
int WinLose(int you, int cpu);

int main(void) {
    time_t tm;
    int cnt = 0;
    int you;
    int cpu;
    int flag;
    int win = 0;
    

    while (cnt < 5){
        you = choiceNum();
        //printf("%d", you);
        time(&tm);
        srand((unsigned int)tm);
        cpu = 0 + rand() % 3;
        //printf("%d", cpu);
        CPUturn(cpu);
        flag = WinLose(you, cpu);
        if (flag == 0) {
            cnt ++;
        } else if(flag == 1) {
            win ++;
            cnt ++;
        }
        printf("あなた%d勝、コンピュータ%d勝\n", win, (cnt) - win);
    }
    if (win > 2) {
        printf("あなたの総合勝利です。参りました。\n");
    } else {
        printf("コンピュータの総合勝利です。残念でした。\n");
    }
    

    return 0;
}

int choiceNum(void)
{
    int num;

    printf("あなたの手を選んでください(グー0、チョキ1、パー2) => \n");
    scanf("%d", &num);
    
    return num;
}

void CPUturn(int num)
{
    if (num == 0) {
        printf("コンピュータはグー\n");
    } else if (num == 1) {
        printf("コンピュータはチョキ\n");
    } else if (num == 2) {
        printf("コンピュータはパー\n");
    }
}

int WinLose(int you, int cpu)
{
    if (you == cpu) {
        printf("あいこ\n");
        return -1;
    } else if (you + 1 == cpu % 3) {
        printf("あなたの勝ち\n");
        return 1;
    } else {
        printf("コンピュータの勝ち\n");
        return 0;
    }
}
