#include <stdio.h>
#include <string.h>
#include "getFunc.h"

int main(void){
    char promptString[] = "文字を入力してください(98文字以内)\ninput => ";
    char inputArray[100];
    int i, j;
    int len;
	int partitions;
    int result;

	// 関数呼び出し
    result = getString(promptString, inputArray, 100);
	// 入力文字列の要素数格納
    len = strlen(inputArray);
	// 分割回数を求める
	partitions = len / 10 + 1;
	if (len % 10 == 0) {
		partitions -= 1; // 割り切れた場合は 1足さない
	}
	printf("--------------------\n");
    for (i = 0; i < partitions; i++) {
        printf("分割(%d)：", i + 1);
        for (j = 0; j < 10; j++) {
        	// 入力文字数を超えてないかチェック
        	if (j + i * 10 <= len) {
        		// 分割数(外ループ)に10を掛けて、内ループ回数を足す
        		printf("%c", inputArray[j+i*10]);
        	} else {
        		break; // 超えた場合はループを抜ける
        	}
        }
        printf("\n");
    }
	printf("--------------------\n");
    printf("%d文字表示しました", len);

    return result;
}