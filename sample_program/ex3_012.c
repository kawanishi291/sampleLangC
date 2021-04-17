#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void checkAnswer(int, int *);

int main(void) {
    time_t tm;
    int num;
    int r;
    int i;

    time(&tm);
    srand((unsigned int)tm);
    r = 1 + rand() % 99;
    for(i = 0; i < 10; i++){
        checkAnswer(r, &i);
    }

    return 0;
}

void checkAnswer(int ans, int *p){
    int num;
    int flag;

    printf("Answer => \n");
    scanf("%d", &num);
    if(ans == num){
        *p += 10;
        printf("STRIKE!!!!\n");
    }else if(num < ans){
        printf("LOW!\n");
    }else{
        printf("HIGH!\n");
    }
}