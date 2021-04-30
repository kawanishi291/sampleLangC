#include <stdio.h>

// 関数プロトタイプ宣言
void doubleValue(int *);

int main(void){
	/* ポインタ渡し */
	int num;
	
	printf("整数を入力してください => ");
	scanf("%d", &num);
	
	doubleValue(&num);
	printf("2倍したら%dになりました", num);
	
	return 0;
}


void doubleValue(int *p){
	*p *= 2;
}
