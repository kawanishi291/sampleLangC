#include <stdio.h>

// 構造体宣言
struct S_WIZARD {
	int id;
	char name[10+1];
	int mp;
};

void printItem(struct S_WIZARD *);

int main(void){
	/* 構造体のポインタ渡し */
	int i;
	struct S_WIZARD wizard = {
		501,
		"Ellie",
		2000
	};

	printItem(&wizard);
	
	return 0;
}

void printItem(struct S_WIZARD *p){
	printf("ID  ：%d\n", p->id);
	printf("名称：%s\n", p->name);
	printf("魔力：%d", p->mp);
}	
