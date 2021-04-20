#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    int i, j;

    fp = fopen("multiplication.txt", "w");
    if (fp == NULL){
        printf("error\n");
        exit(1);
    }
    for (i = 1; i < 10; i++) {
        fprintf(fp, "%dの段：", i);
        for (j = 1; j < 10; j++) {
            fprintf(fp, "%2d", i * j);
            if (j != 9) fprintf(fp, ",");;
        }
        fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}