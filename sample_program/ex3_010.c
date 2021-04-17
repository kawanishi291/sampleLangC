#include <stdio.h>

int EuclideanCompatibility(int, int);

int main(){
    int num1;
    int num2;
    int tmp;
    int ans;

    printf("数値1を入力してください => \n");
    scanf("%d", &num1);
    printf("数値2を入力してください => \n");
    scanf("%d", &num2);
    ans = EuclideanCompatibility(num1, num2);
    printf("%dと%dの最大公約数は%dです\n", num1, num2, ans);

    return 0;
}

int EuclideanCompatibility(int num1, int num2){
    int i;
    int tmp;

    i = 1;
    while(i != 0){
        i = num1 % num2;
        tmp = num1 / num2;
        printf("%d / %d -> %d...%d\n", num1, num2, tmp, i);
        num1 = num2;
        num2 = i;
    }

    return num1;
}