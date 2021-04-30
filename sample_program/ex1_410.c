#include <stdio.h>


int main(void){
	/* for文 */
	int i;
	int num;
	int sum = 1;
	
	printf("整数を入力してください ");
	printf("=> ");
	scanf("%d", &num);
	i = num;
	
	for(i; i > 1; i--){
		sum *= i;
	}
	
	printf("%dの階乗は%dです\n", num, sum);
	
	return 0;
}
