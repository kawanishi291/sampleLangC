#include <stdio.h>


int main(void){
	/* while文 */
	int i = 1;
	int end;
	int sum = 0;
	
	printf("整数を入力してください ");
	printf("=> ");
	scanf("%d", &end);
	
	while(i <= end){
		sum += i;
		i++;
	}
	
	printf("1～%dまでの和は%dです\n", end, sum);
	
	return 0;
}
