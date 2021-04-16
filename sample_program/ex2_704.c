#include <stdio.h>

// 構造体宣言
struct S_WIZARD {
    int id;
    char name[10+1];
    int magic;
};

// 関数プロトタイプ宣言
void setData(struct S_WIZARD *);

int main(void) {
    struct S_WIZARD wizard;
    struct S_WIZARD *p = &wizard;

    setData(p);
    printf("\nデータは構造体に保存されました!\n\n");
    printf("ID　：%d\n", p->id);
    printf("名称：%s\n", p->name);
    printf("魔力：%d\n", p->magic);
    return 0;
}

void setData(struct S_WIZARD *p){
    printf("ID => \n");
    scanf("%d", &p->id);
    printf("名称 => \n");
    scanf("%s", p->name);
    printf("魔力 => \n");
    scanf("%d", &p->magic);
}