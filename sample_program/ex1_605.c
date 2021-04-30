#include <stdio.h>

// 関数プロトタイプ宣言
void changA2Q(char *);

int main(void){
	/* 配列のポインタ渡し */
	char str[100];
	
	printf("文字列を入力してください\n=> ");
	scanf("%s", str);
	
	changA2Q(&str[0]);
	printf(">> %s\n", str);
	
	return 0;
}


void changA2Q(char *p){
	int i;
	for(i = 0; i < strlen(p); i++){
		if(p[i] == 'A'){
			p[i] = 'Q';
		}
	}
	
}
