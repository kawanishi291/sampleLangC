#include <stdio.h>



int main(){
    int flag;
    float m2;
    int z;
    int t;

    printf("0:畳, 1:㎡, 2:坪\n");
    scanf("%d", &flag);
    switch(flag) {
        case 0:
            printf("畳：\n");
            scanf("%d", &z);
            printf("%d畳, %.2f㎡, 約%.1f坪\n", z, z * 1.62, (float)z / 2);
            break;
        case 1:
            printf("㎡：\n");
            scanf("%f", &m2);
            printf("%.2f畳, %.2f㎡, 約%.2f坪\n", m2 / 1.62, m2, (m2 / 1.62) / 2);
            break;
        case 2:
            printf("坪：\n");
            scanf("%d", &t);
            printf("%d畳, %.2f㎡, 約%d坪\n", t * 2, t * 2 * 1.62, t);
            break;
    }

}