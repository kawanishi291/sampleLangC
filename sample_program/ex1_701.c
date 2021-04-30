#include <stdio.h>

// 構造体宣言
struct S_SCORE {
	int number;
	int english;
	int japanese;
	int math;
};

int main(void){
	/* 構造体の利用 */
	struct S_SCORE student01 = {
		101,
		72,
		65,
		80
	};
	
	printf("学生番号  ：%d\n", student01.number);
	printf("英語の点数：%d\n", student01.english);
	printf("国語の点数：%d\n", student01.japanese);
	printf("数学の点数：%d\n", student01.math);
	
	return 0;
}
