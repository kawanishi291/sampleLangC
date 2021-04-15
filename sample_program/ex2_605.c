#include <stdio.h>

void sortArray(int *);

int main(void) {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    
    printf("並び替え前：");
    for(i = 0; i < 10; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
    sortArray(&array[0]);
    printf("並び替え後：");
    for(i = 0; i < 10; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");

    return 0;
}

void sortArray(int *p){
    int i;
    int tmp;

    for(i = 9; i > 4; i--){
        tmp = p[i];
        p[i] = p[9-i];
        p[9-i] = tmp;
    }

}