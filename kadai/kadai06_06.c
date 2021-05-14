#include <stdio.h>

int main(){
    int i;
    int n;
    int r;
    int denominator = 1; // 分母
    int molecule = 1;    // 分子

    printf("n => \n");
    scanf("%d", &n);
    printf("r => \n");
    scanf("%d", &r);
    for (i = 1; i <= r; i++) {
        molecule *= n;
        denominator *= i;
        n--;
    }
    printf("%.2f", (double)molecule / (double)denominator);

    return 0;
}