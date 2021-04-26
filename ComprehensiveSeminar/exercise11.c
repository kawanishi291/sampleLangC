#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int WordCounts(int flag);


int main(void){
    FILE *fp;
    int i;
	int flag = 0;	/* 1つ前が文字か判定 */
	int spels = 0;	/* 文字数カウント */
	int words = 0;	/* 単語数カウント */
	int lines = 1;	/* 行数カウント */

    fp = fopen("english.txt", "r");
	/* 指定ファイルが見つからない */
    if (fp == NULL){
        printf("error\n");
        exit(1);
    }
	/* 指定ファイルが見つかる */
    while ((i = fgetc(fp)) != EOF) {
    	if ((i == ' ') || (i == '\t')) {
    		words += WordCounts(flag);
    		flag = 0;
    	} else if (i == '\n') {
    		words += WordCounts(flag);
    		lines += 1;
    		flag = 0;
    	} else {
    		spels += 1;
    		flag = 1;
    	}
    }
	printf("**追加総合演習２開始**\n");
	words += WordCounts(flag); /* [EOF]の直前が文字だった場合 */
	printf("文字数%d\n行数%d\n単語数%d", spels, lines, words);
	printf("\n**追加総合演習２終了**\n");
    fclose(fp);

    return 0;
}


/* 単語数カウント関数 */
int WordCounts(int flag)
{
	int cnt = 0;
	
	if (flag == 1) {
    	cnt += 1;
   	}
	
	return cnt;
}