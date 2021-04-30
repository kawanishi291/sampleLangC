#include <stdio.h>


int main(void){
	/* 配列の初期化 */
	int i;
	int array[5] = {10, 20, 30, 40, 50};
	
	/* for(i = 0; i < 5; i++){
		printf("%d番目の要素:%d\n", i+1, array[i]);
	}
	printf("\n"); */
	
	printf("1番目の要素:%d\n", array[0]);
	printf("2番目の要素:%d\n", array[1]);
	printf("3番目の要素:%d\n", array[2]);
	printf("4番目の要素:%d\n", array[3]);
	printf("5番目の要素:%d\n", array[4]);
	
	return 0;
}
