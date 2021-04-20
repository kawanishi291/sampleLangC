#include <stdio.h>

union UNION_A {
    char a[4];
    float f;
    int n;
};

int main(void){
    union UNION_A unionA;
    union UNION_A *p = &unionA;

    printf("配列(3文字) => \n");
    scanf("%s", unionA.a);
    printf("メンバ(a) = %s\n", p->a);
    printf("実数 => \n");
    scanf("%f", &unionA.f);
    printf("メンバ(f) = %f\n", p->f);
    printf("整数 => \n");
    scanf("%d", &unionA.n);
    printf("メンバ(n) = %d\n", p->n);

    return 0;
}