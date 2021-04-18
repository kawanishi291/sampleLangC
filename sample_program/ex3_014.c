#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void setingArray(int *);
void printCards(int *);
int resultsOfMatch(int, int, int, int *);

int main(void) {
    int i;
    int array[52];
    
    setingArray(array);
    printCards(array);

    return 0;
}

void setingArray(int *p){
    time_t tm;
    int num;
    int r;
    int i;
    int cnt;
    int flag;

    time(&tm);
    srand((unsigned int)tm);
    cnt = 0;
    flag = 1;
    while(cnt < 52){
        r = 1 + rand() % 52;
        // printf("r=%d\n", r);
        for(i = 0; i <= cnt; i++){
            if(p[i] == r){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
            // printf("p[%d]:%d\n", i, p[i]);
        }
        if(flag){
            // printf("%d", r);
            p[cnt] = r;
            cnt += 1;
        }
    }
}

void printCards(int *p){
    int i;
    int num;
    int win;

    for(i = 0; i < 52; i++){
        // printf("p[%d]:%d\n", i, p[i]);
        if(i > 0){
            printf("BIG(0) or SMALL(1) => \n");
            scanf("%d", &num);
        }else{
            win = 0;
        }
        if(p[i] / 13 == 0){
            printf("【ハートの");
        }else if(p[i] / 13 == 1){
            printf("【ダイヤの");
        }else if(p[i] / 13 == 2){
            printf("【スペードの");
        }else{
            printf("【クローバーの");
        }
        if(p[i] % 13 == 0){
            printf("13】");
        }else{
            printf("%d】", p[i] % 13);
        }
        if(i == 0){
            printf("\n");
        }
        win = resultsOfMatch(i, num, win, p);
        if(win >= 30)break;
    }
    printf("/n");
}

int resultsOfMatch(int i, int num, int win, int *p){

    if(i > 0){
        if(p[i] % 13 < 2 || p[i-1] % 13 < 2){
            if(p[i-1] % 13 > 1){
                win += 1;
                printf(" -> ★★YOU WIN!");
                if(i > 1){
                    printf("　（現在%d連勝中）\n", win);
                }else{
                    printf("\n");
                }
            }else if(p[i] % 13 > 1){
                printf(" -> YOU LOSE...\n");
                win = 100;
            }else{
                if(p[i-1] % 13 < p[i] % 13){
                    if(num == 0){
                        win += 1;
                        printf(" -> ★★YOU WIN!");
                        if(i > 1){
                            printf("　（現在%d連勝中）\n", win);
                        }else{
                            printf("\n");
                        }
                    }else if(num == 1){
                        printf(" -> YOU LOSE...\n");
                        win = 100;
                    }
                }else if(p[i-1] % 13 > p[i] % 13){
                    if(num == 1){
                        win += 1;
                        printf(" -> ★★YOU WIN!");
                        if(i > 1){
                            printf("　（現在%d連勝中）\n", win);
                        }else{
                            printf("\n");
                        }
                    }else if(num == 0){
                        printf(" -> YOU LOSE...\n");
                        win = 100;
                    }
                }else{
                    printf("...DRAW\n");
                }
            }
        }else{
            if(p[i-1] % 13 < p[i] % 13){
                if(num == 0){
                    win += 1;
                    printf(" -> ★★YOU WIN!");
                    if(i > 1){
                        printf("　（現在%d連勝中）\n", win);
                    }else{
                        printf("\n");
                    }
                }else if(num == 1){
                    printf(" -> YOU LOSE...\n");
                    win = 100;
                }
            }else if(p[i-1] % 13 > p[i] % 13){
                if(num == 1){
                    win += 1;
                    printf(" -> ★★YOU WIN!");
                    if(i > 1){
                        printf("　（現在%d連勝中）\n", win);
                    }else{
                        printf("\n");
                    }
                }else if(num == 0){
                    printf(" -> YOU LOSE...\n");
                    win = 100;
                }
            }else{
                printf("...DRAW\n");
            }
        }
    }

    return win;
}