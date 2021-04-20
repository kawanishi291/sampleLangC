#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    int str;
    int sum;

    sum = 0;
    fp = fopen("shortSentence.txt", "r");
    if (fp == NULL) {
        printf("file open failed!\n");
        exit(1);
    }
    while ((str = fgetc(fp)) != EOF) {
        // printf("%c", str);
        if ('0' <= str && str <= '9') {
            printf("found! '%c'\n", str);
            sum += str - ('0' - 0);
        }
    }
    fclose(fp);
    printf("----------------\n");
    printf("数字の合計値：%d\n", sum);


    return 0;
}