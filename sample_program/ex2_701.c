#include <stdio.h>

struct employee {
    int id;
    char name[12];
    int age;
    int height;
    int weight;
} member;

int main(void) {

    printf("ID => ");
    scanf("%d", &member.id);
    printf("名前 => ");
    scanf("%s", member.name);
    printf("年齢 => ");
    scanf("%d", &member.age);
    printf("身長(cm) => ");
    scanf("%d", &member.height);
    printf("体重(kg) => ");
    scanf("%d", &member.weight);
    printf("\nデータは構造体に保存されました!\n\n");

    printf("ID\t：%d\n", member.id);
    printf("名前\t：%s\n", member.name);
    printf("年齢\t：%d\n", member.age);
    printf("身長(cm)：%d\n", member.height);
    printf("体重(kg)：%d\n", member.weight);

    return 0;
}