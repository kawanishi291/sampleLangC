#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pOrigin = malloc(20);
    int *pDestination = malloc(20);
    int i;

    for (i = 0; i < 20; i++){
        pOrigin[i] = i + 1;
    }
    for (i = 0; i < 20; i++){
        pDestination[i] = pOrigin[19 - i];
    }
    printf("コピー元配列：");
    for (i = 0; i < 20; i++){
        printf("%2d,", pOrigin[i]);
    }
    printf("\nコピー先配列：");
    for (i = 0; i < 20; i++){
        printf("%2d,", pDestination[i]);
    }
    printf("\n");
    free(pOrigin);
    free(pDestination);
    

    return 0;
}