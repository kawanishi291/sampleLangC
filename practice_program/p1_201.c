#include <stdio.h>

int value = 10;

int func(void);

int main(void){

    func();
    printf("(mainで表示) value = %d\n", value);

    return 0;
}

int func(void){
    printf("(funcで表示) value = %d\n", value);
}