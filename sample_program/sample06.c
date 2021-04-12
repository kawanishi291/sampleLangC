#include <stdio.h>

void main(void){
    int i;
    double height;
    double weight;
    double bmi;
    double bestHeight;
    int farther;
    int mother;

    for(i = 0; i < 2; i++){
        if(i == 0){
            printf("（男性）\n");
        }else{
            printf("（女性）\n");
        }
        printf("身長(cm):\n");
        scanf("%lf", &height);
        if(i == 0){
            farther = (int)height;
        }else{
            mother = (int)height;
        }
        printf("体重(kg):\n");
        scanf("%lf", &weight);
        height = height / 100;
        bmi = weight / (height * height);
        bestHeight = (height * height) * 22;

        printf("BMI:%lf\n", bmi);
        printf("適正体重:%lf(kg)\n\n", bestHeight);
    }
    printf("子供の身長\n");
    printf("男の子:%d(cm)\n", (farther + mother + 13) / 2 + 2);
    printf("女の子:%d(cm)\n", (farther + mother - 13) / 2 + 2);
}