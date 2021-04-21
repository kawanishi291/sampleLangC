#include <stdio.h>
#include <string.h>
#include "getFunc.h"

int main(void){
    char promptString[] = "input => ";
    char inputArray[100];
    int i, j;
    int len;
    int result;

    result = getString(promptString, inputArray, 100);
    len = strlen(inputArray);
    for (i = 0; i < len / 10 + 1; i++) {
        printf("分割(%d)：", i);
        for (j = 0; j < 10; j++){
            printf("%c", inputArray[j+i*10]);
        }
        printf("\n");
    }
    printf("%d", len);

    return 0;
}