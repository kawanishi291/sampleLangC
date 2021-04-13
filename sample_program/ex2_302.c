#include <stdio.h>

int main(void) {
    char c = 65;
    int i;

    printf("最初の文字：%c\n", c);

    for(i = 1; i <= 3; i++){
        c++;
        printf("%d加えた文字：%c\n", i, c);
    }
}