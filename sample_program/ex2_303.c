#include <stdio.h>

int main(void) {
    char array[] = {'X', 'Y', 'Z'};
    int i;

    for(i = 0; i < 3; i++){
        printf("%c\n", array[i]);
    }
}