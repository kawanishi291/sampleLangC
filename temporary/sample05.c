#include <stdio.h>

int main(){
    int z;
    int h;

    printf("畳：\n");
    scanf("%d", &z);
    printf("%d畳, %.2f㎡, 約%d坪", z, z * 1.62, z / 2);

}