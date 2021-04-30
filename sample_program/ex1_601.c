#include <stdio.h>


int sum1toNumber(int);

int main(void){
	/* 関数の利用 */
	int num;
	int ans;
	
	printf("整数を入力してください => ");
	scanf("%d", &num);
	ans = sum1toNumber(num);
	printf("1から%dまでの和：%d", num, ans);
	
	return 0;
}


int sum1toNumber(int number){
	int sum;
	int i;
	
	sum = 0;
	for(i = 1; i <= number; i++){
		sum += i;
	}
	
	return sum;
}
