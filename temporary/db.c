#include <stdio.h>

int main(){
    int great;
    int good;
    
    scanf("%d", &great);
    scanf("%d", &good);
    printf("\n(2, %d, %d, %d, %d,\n", (great*10+good*5), great, good, 202-(great+good));
}