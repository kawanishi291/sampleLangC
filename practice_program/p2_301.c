#include <stdio.h>

#define ARRAY_SIZE (10)
#define DEBUG_COUNT "DEBUG："

int main(void){
    int arr[ARRAY_SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int i, j, tmp;
    int cnt;

    /* バブルソートアルゴリズム */
    for (i = ARRAY_SIZE - 1; i > 1; i--) { // 継続条件は i > 0;
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
#ifdef DEBUG_COUNT
        printf("%s", DEBUG_COUNT);
        for (cnt = 0; cnt < ARRAY_SIZE; cnt++) {
            printf("%d,", arr[cnt]);
        }
        printf("\n");
#endif
    }
    printf("--- ソート後 ---\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d%s", arr[i], i == ARRAY_SIZE - 1 ? "\n" : ",");
    }

    return 0;
}