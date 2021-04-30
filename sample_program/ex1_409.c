#include <stdio.h>


int main(void){
	/* do～while文 */
	int i;
	int start;
	int sum = 0;
	
	printf("整数を入力してください ");
	printf("=> ");
	scanf("%d", &start);
	i = start;
	
	do{
		sum += i;
		i--;
	}while(i >= 1);
	
	printf("%d～１までの和は%dです\n", start, sum);
	
	return 0;
}
