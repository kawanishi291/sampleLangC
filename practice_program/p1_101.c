#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *fp;
    char str[200];
    int i;

    fp = fopen("kihonkyu.txt", "r");
    if (fp == NULL){
        printf("error\n");
        exit(1);
    }
    while (fgets(str, 200, fp) != NULL) {
        for (i = 0; i < strlen(str); i++) {
            if (i == 0){
                printf("社員番号：%c", str[i]);
            } else if (str[i] == ',') {
                printf(" 基本給：");
            } else if (str[i] == '\n') {
                printf("円\n");
            } else {
                printf("%c", str[i]);
            }
        }
    }
    fclose(fp);

    return 0;
}