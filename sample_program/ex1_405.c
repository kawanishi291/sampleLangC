#include <stdio.h>


int main(void){
	/* if文の入れ子 */
	int num;
	
	printf("整数を入力してください ");
	printf("=> ");
	scanf("%d", &num);
	
	if(num % 2 == 1){
		if(num % 3 == 2){
			printf("HIT!!\n");
		}
	}
	return 0;
}
