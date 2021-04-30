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
	int i;
	struct S_SCORE student[5] = {
		{101, 72, 65, 80},
		{102, 90, 78, 45},
		{103, 55, 68, 92},
		{104, 80, 75, 72},
		{105, 67, 72, 56}
	};
	
	for(i = 0; i < 5; i++){
		printf("学生番号  ：%d", student[i].number);
		printf("（英語）%d", student[i].english);
		printf("（国語）%d", student[i].japanese);
		printf("（数学）%d\n", student[i].math);
	}
	
	return 0;
}
