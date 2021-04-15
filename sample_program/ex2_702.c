#include <stdio.h>

struct employee {
    int id;
    char name[12];
    int age;
    int height;
    int weight;
} member[3];

void printLine();

int main(void) {
    int i;

    for(i = 0; i < 3; i++){
        printf("\n（%d人目の入力）\n", i+1);
        printf("ID => ");
        scanf("%d", &member[i].id);
        printf("名前 => ");
        scanf("%s", member[i].name);
        printf("年齢 => ");
        scanf("%d", &member[i].age);
        printf("身長(cm) => ");
        scanf("%d", &member[i].height);
        printf("体重(kg) => ");
        scanf("%d", &member[i].weight);
    }
    printf("\nデータは構造体に保存されました!\n\n");
    printLine();
    printf("| ID  |  名前   | 年齢 | 身長(cm) | 体重(kg) |\n");
    printLine();
    for(i = 0; i < 3; i++){
        printf("| %d |  %s |  %d  |   %d    |    %d    |\n", member[i].id, member[i].name, member[i].age, member[i].height, member[i].weight);
    }
    printLine();
    
    return 0;
}

void printLine(){
    printf("+-----+---------+------+----------+----------+\n");
}
