#include <stdio.h>


int main(void) {
    char arySrc[100], aryDst[100];
    char *pSrc = arySrc;
    char *pDst = aryDst;
    int i;


    printf("文字列(10〜99文字)を入力してください => \n");
    scanf("%s", arySrc);
    for(i = 0; i < 5; i++){
        aryDst[i] = *(pSrc + i + 2);
    }
    aryDst[5] = '\0';
    printf("aryDst：");
    for(i = 0; i < 5; i++){
        printf("%c", *(pDst + i));
    }
    printf("\n");

    return 0;
}