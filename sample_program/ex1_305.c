#include <stdio.h>


int main(void){
	/* キーボードからの入力 */
	int num1;
	int num2;
	int num3;
	int sum;
	
	printf("数値を3つ入力してください。\n");
	printf("=>");
	scanf("%d", &num1);
	printf("=>");
	scanf("%d", &num2);
	printf("=>");
	scanf("%d", &num3);
	
	sum = num1 + num2 + num3;
	
	printf("3つの数値の合計は、%dです。\n", sum);
	
	return 0;
}
