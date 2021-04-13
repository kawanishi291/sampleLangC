#include <stdio.h>

int main(void) {
    int i;
    int num;
    int array[10];

    for(i = 0; i < 10; i++){
        printf("%d文字目のASCIIコードを入力してください => \n", i);
        scanf("%d", &num);
        array[i] = num;
    }
    for(i = 0; i < 10; i++){
        printf("%c\n", array[i]);
    }
}