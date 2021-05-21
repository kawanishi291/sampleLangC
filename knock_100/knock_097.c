/*
ビンゴゲームのカードを作るプログラムを作ろう。縦5マス、横5マス、計25マスのそれぞれに1〜75までの数字をランダムに配置する※。
同じ番号は2回以上配置しない。作成したカードは、実行例のようにタブ(\t)を開けて表示すること。
※一般的なビンゴカードは、縦の5列それぞれは1〜15、16〜30、31〜45、46〜60、61〜75のそれぞれの数字のうち5つずつを配置し、
中央のマスはフリーとしているが、ここでは簡単のためにこのようにしている。余裕があれば一般的なカードを作ってるとよいだろう。
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define CARDS 25
#define ROWS 5
#define COLUMNS 5

void SetBINGO();
void PrintCard();

int bingo_card[ROWS][COLUMNS];

int main(){

    SetBINGO();
    PrintCard();

    return 0;
}


void SetBINGO(){
    int tmp_list[CARDS];
    int i;
    int j;
    int cnt;
    int num;
    int flag = 1;
    time_t tm;

    time(&tm);
    srand((unsigned int)tm);
    for (i = 0; i < CARDS; i++) {
        cnt = 0;
        num = 1 + rand() % 75;
        do {
            if (num == tmp_list[cnt]) {
                flag = 1;
                break;
            }
            cnt ++;
        } while (cnt < i);
        if (flag == 1) {
            i --;
            flag = 0;
        } else {
            tmp_list[i] = num;
        }
    }
    cnt = 0;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLUMNS; j++) {
            bingo_card[i][j] = tmp_list[cnt];
            cnt++;
        }
    }

}


void PrintCard()
{
    int i;
    int j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLUMNS; j++) {
            printf("%d\t", bingo_card[i][j]);
        }
        printf("\n");
    }
}