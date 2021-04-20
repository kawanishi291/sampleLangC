#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *fp;
    char input[30+1];
    char ans[] = "exit";
    int flag;

    flag = 1;
    fp = fopen("enterdWords.txt", "w");
    if (fp == NULL) {
        printf("file open failed!\n");
        exit(1);
    }
    do {
        printf("単語 => \n");
        scanf("%s", input);
        fprintf(fp, "%s\n", input);
        if (strcmp(input, ans) == 0) {
            flag = 0;
        }

    } while (flag);
    fclose(fp);

    return 0;
}