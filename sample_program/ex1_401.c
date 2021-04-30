#include <stdio.h>


int main(void){
	/* 四則演算 */
	int num1;
	int num2;
	
	printf("数値を２つ入力してください。\n");
	printf("=> ");
	scanf("%d", &num1);
	printf("=> ");
	scanf("%d", &num2);
	
	printf("%d + %d → %d\n", num1, num2, num1 + num2);
	printf("%d - %d → %d\n", num1, num2, num1 - num2);
	printf("%d * %d → %d\n", num1, num2, num1 * num2);
	printf("%d / %d → %d\n", num1, num2, num1 / num2);
	printf("%d %% %d → %d\n", num1, num2, num1 % num2);
	
	return 0;
}
