#include <stdio.h>

void main(){
    int x;
    int y;

    printf("x => \n");
    scanf("%d", &x);
    printf("y => \n");
    scanf("%d", &y);
    if (x > y) {
        printf("x = %d", x);
    } else {
        printf("y = %d", y);
    }

}