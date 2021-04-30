#include <stdio.h>


int main(void){
	/* if文と関係演算子 */
	int num;
	
	printf("整数を入力してください ");
	printf("=> ");
	scanf("%d", &num);
	
	if(num % 3 == 0){
		printf("%dは3の倍数です\n", num);
	}
	return 0;
}
