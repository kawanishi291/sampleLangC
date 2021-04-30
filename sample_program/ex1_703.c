#include <stdio.h>

// 構造体宣言
struct S_POINT {
	int x;
	int y;
};

int main(void){
	/* 構造体とポインタ */
	int i;
	struct S_POINT point = {
		200,
		150
	};
	struct S_POINT *p = &point;
	
	printf("x座標：%d\n", p->x);
	printf("y座標：%d", p->y);
	
	return 0;
}
