#include <stdio.h>
#include <string.h>
#include "examineArray.h"
#include "getFunc.h"

int main(void){
	char promptMessage[] = "input => \n";
	int ary[11];
	int cnt = 0;
	int result;
	int num;
	
	printf("0～10までの数値を10回入力してください\n");
	// 10回の入力処理(関数を呼ぶ)
	while (cnt < 10) {
		result = getNumber(promptMessage, 0, 10);
		// 戻り値が -1 はエラー, その他は入力値
		if (result != -1) {
			ary[cnt] = result;
			cnt += 1;
		}
	}
	num = getOddMax(ary, sizeof ary / sizeof ary[0] - 1);
	printf("\n奇数で一番大きな数値：%d\n", num);
	num = getSecondMin(ary, sizeof ary / sizeof ary[0] -1);
	printf("小さい方から2番目の数値：%d\n", num);
	
    return 0;
}


