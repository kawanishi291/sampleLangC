#include <stdio.h>

struct ST_I {
    int type;
    int value;
};
struct ST_F {
    int type;
    float value;
};

union UN_A {
    struct ST_I u_i;
    struct ST_F u_f;
};

int main(void){
    union UN_A un_a[3];
    int i;
    int type;
    int value1;
    float value2;
    union UN_A *p = un_a;

    printf("---- 共用体配列へ数値を格納 ---\n");
    for (i = 0; i < 3; i++) {
        printf("タイプ(1:整数, 2:実数) => \n");
        scanf("%d", &type);
        if (type == 1) {
            un_a[i].u_i.type = type;
            printf("整数値 => \n");
            scanf("%d", &value1);
            un_a[i].u_i.value = value1;
        } else {
            un_a[i].u_f.type = type;
            printf("実数値 => \n");
            scanf("%f", &value2);
            un_a[i].u_f.value = value2;
        }
    }
    printf("---- 共用体配列の数値の表示 ---\n");
    for (i = 0; i < 3; i++) {
        if (p[i].u_i.type == 1) {
            printf("要素番号%d：value (整数) = %d\n", i, p[i].u_i.value);
        } else {
            printf("要素番号%d：value (実数) = %f\n", i, p[i].u_f.value);
        }
    }

    return 0;
}