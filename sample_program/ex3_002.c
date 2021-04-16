#include <stdio.h>

int main() {
    int i;
    int sum;

    sum = 1;
    for(i = 0; i < 6; i++){
        printf("%6d\n", sum);
        sum = sum * 10 + 1;
    }

    return 0;
}