#include <stdio.h>

int main(){
    static int n;
    int i;
    int sum = 0;
    int pro = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
        pro *= i;
    }
    printf("%d, %d", sum, pro);

    return 0;
}