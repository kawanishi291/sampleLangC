#include <stdio.h>

// 関数プロトタイプ宣言
int calculateChange(int, int, int);

int main(void){
	/* 複数の仮引数を持つ関数 */
	int a, b, c;
	int ans;
	
	printf("1個何円ですか? => ");
	scanf("%d", &a);
	printf("何個買いますか? => ");
	scanf("%d", &b);
	printf("何円支払いますか? => ");
	scanf("%d", &c);
	ans = calculateChange(a, b, c);
	printf("おつりは%d円です", ans);
	
	return 0;
}


int calculateChange(int a, int b, int c){
	int sum;
	
	sum = c - (a * b);
	
	return sum;
}
