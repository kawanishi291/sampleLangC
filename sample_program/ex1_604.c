#include <stdio.h>

// 関数プロトタイプ宣言
void printArray(char *);

int main(void){
	/* 配列のポインタ渡し */
	char str[] = "今日も元気だ";
	
	printArray(&str[0]);
	
	return 0;
}


void printArray(char *p){
	
	printf("%s", p);
	
}
