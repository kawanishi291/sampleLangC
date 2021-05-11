#include <stdio.h>

void main(){
    int x = 0x4567;
    int y = 0x0f0f;

    printf("論理積:%x\n", x & y);
    printf("論理和:%x\n", x | y);
    printf("排他的論理和:%x\n", x ^ y);
    printf("xの補数:%x\n", ~x);

}