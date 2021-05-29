#include <stdio.h>



int main(){
    int flag;
    int m2;
    int z;
    int h;

    printf("0:畳, 1:㎡, 2:坪");
    scanf("%d", &flag);
    switch(flag) {
        case 0:
            printf("畳：\n");
            scanf("%d", &z);
            printf("%d畳, %.2f㎡, 約%d坪", z, z * 1.62, z / 2);
            break;
        case 1:
            printf("㎡：\n");
            scanf("%d", &m2);
            printf("%d畳, %.2f㎡, 約%d坪", m2 / 1.62, m2, (m2 / 1.62) / 2);
            break;
    }

}