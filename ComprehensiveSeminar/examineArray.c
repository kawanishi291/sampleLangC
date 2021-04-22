#include <stdio.h>
#include <string.h>
#include "examineArray.h"


int getOddMax(int *ary, int size)
{
	int i;
	int result = -1;
	
	if (size != 0){
		for (i = 0; i < size; i++) {
			if (ary[i] % 2 == 1 && ary[i] > result) {
				result = ary[i];
			}
		}
	}
	
    return result;
}


int getSecondMin(int *ary, int size)
{
	int i;
	int result = 11;
	int min = 11;

	// 配列要素数が２個以上あるか
	if (size > 1){
		for (i = 0; i < size; i++) {
			// 最小値をminへ
			if (ary[i] < min) {
				min = ary[i];
			}
		}
		
		for (i = 0; i < size; i++) {
			// 二番目に小さな値をresultへ
			if (ary[i] < result && ary[i] != min){
				result = ary[i];
			}
		}
	}
	// resultが初期値のままなら、異常系）1を代入
	if (result == 11){
		result = -1;
	}

    return result;
}
