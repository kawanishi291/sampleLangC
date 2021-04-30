#include <stdio.h>


int main(void){
	/* ポインタと配列 */
	int array[5] = {5, 4, 3, 1, 7};
	int *p = array;
	int i;
	
	printf("添字を入力してください => ");
	scanf("%d", &i);
	
	printf("(p + %d)：%d", i, *(p + i));
	
	return 0;
}
