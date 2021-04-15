#include <stdio.h>

struct profile {
    char name[30];
    double height;
    double weight;
    double bmi;
    double bestWeight;
    int gender;
} member[2];

void main(void){
    int i;
    int farther;
    int mother;

    for(i = 0; i < 2; i++){
        if(i == 0){
            printf("（男性）\n");
        }else{
            printf("（女性）\n");
        }
        printf("名前\n");
        scanf("%s", member[i].name);
        printf("身長(cm):\n");
        scanf("%lf", &member[i].height);
        printf("体重(kg):\n");
        scanf("%lf", &member[i].weight);
        if(i % 2 == 1){
            farther = member[i].height;
        }else{
            mother = member[i].height;
        }
        member[i].height = member[i].height / 100;
        member[i].bmi = member[i].weight / (member[i].height * member[i].height);
        member[i].bestWeight = (member[i].height * member[i].height) * 22;
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 2; i++){
        printf("名前\t:%s\n", member[i].name);
        printf("身長(cm):%f\n", member[i].height);
        printf("体重(kg):%f\n", member[i].weight);
        printf("BMI\t:%.2f\n", member[i].bmi);
        printf("適正体重:%.2f(kg)\n\n", member[i].bestWeight);
    }
    printf("子供の身長\n");
    printf("男の子:%d(cm)\n", (farther + mother + 13) / 2 + 2);
    printf("女の子:%d(cm)\n", (farther + mother - 13) / 2 + 2);
}