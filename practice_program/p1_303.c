#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* 動的メモリ確保 */
	char *p = malloc(64);
	
	printf("文字列 (50文字) => ");
	scanf("%s", p);
	printf("入力した文字列：%s", p);
	free(p);
	
    return 0;
}
