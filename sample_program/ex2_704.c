#include <stdio.h>

// 構造体宣言
struct S_WIZARD {
    int id;
    char name[10+1];
    int magic;
};

// 関数プロトタイプ宣言
void printData(struct S_WIZARD *);

int main(void) {
    struct S_WIZARD wizard = {
        501,
        "Ellie",
        2000
    };

    printData(&wizard);

    return 0;
}

void printData(struct S_WIZARD *p){
    printf("ID　：%d\n", p->id);
    printf("名称：%s\n", p->name);
    printf("魔力：%d\n", p->magic);
}