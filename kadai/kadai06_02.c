#include <stdio.h>

int kcal(int k_hosu, float k_omosa);

int main(){
    float weight;
    int steps;

    printf("体重を入力してください => \n");
    scanf("%f", &weight);
    printf("歩いた歩数を入力してください => \n");
    scanf("%d", &steps);
    kcal(steps, weight);

    return 0;
}

int kcal(int k_hosu, float k_omosa)
{
    printf("消費カロリー：%.2fkcal\n", k_hosu * k_omosa / 2000.0);

    return 0;
}