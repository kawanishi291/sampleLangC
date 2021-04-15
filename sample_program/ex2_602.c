#include <stdio.h>

int multiply(int, int);

int main(void) {
    int i, j;
    int ans;

    for(i = 1; i < 10; i++){
        for(j = 1; j < 10; j++){
            ans = multiply(i, j);
            printf("%2d  ", ans);
        }
        printf("\n");
    }

    return 0;
}

int multiply(int num1, int num2){
    return num1 * num2;
}