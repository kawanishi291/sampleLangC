#include <stdio.h>
#include <string.h>
#include "examineArray.h"
#include "getFunc.h"

int main(void){
	char promptMessage[] = "input => \n";
	int ary[11];
	int cnt = 0;
	int result;
	int i;
	int size;
	int num;
	
	printf("0～10までの数値を10回入力してください\n");
	// 10回の入力処理(関数を呼ぶ)
	while (cnt < 10) {
		result = getNumber(promptMessage, 0, 10);
		// 戻り値が -1 はエラー, その他は入力値
		if (0 <= result && result <= 10) {
			ary[cnt] = result;
			cnt += 1;
		} else if(result == -1) {
			ary[cnt] = result;
			cnt += 10;
		}
	}
	// 入力された数値の個数(size)を求める
	for (i = 0; i < 10; i++) {
		if (ary[i] == -1) {
			size = i;
			break;
		} else {
			size = 10;
		}
	}
	// 奇数で一番大きな数値を見つける処理(関数を呼ぶ)
	num = getOddMax(ary, size);
	if (num == -1){
		printf("奇数で一番大きな数値：なし\n");
	} else {
		printf("奇数で一番大きな数値：%d\n", num);
	}
	// 小さい方から2番目の数値を見つける処理(関数を呼ぶ)
	num = getSecondMin(ary, size);
	if (num == -1) {
		printf("小さい方から2番目の数値：なし\n");
	} else {
		printf("小さい方から2番目の数値：%d\n", num);
	}
	
    return 0;
}


