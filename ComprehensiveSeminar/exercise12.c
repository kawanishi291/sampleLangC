#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getFunc.h"

void printInfo(void);


int main(int argc, char *argv[]){
	char promptString[] = "ファイル名を入力してください\ninput => \n";
    char inputArray[100];
	int StringArray[100];
    FILE *fp;
	FILE *tmp;
    int c;
	int i;
	int cnt = 0;
	int add = 0;
	
	if (argc == 2) {
        strcpy(inputArray, argv[1]);
    } else {
    	getString(promptString, inputArray, 100);
    }
	
	fp = fopen(inputArray, "r");
	tmp = fp;
    if (fp == NULL){
        printf("error\n");
        exit(1);
    }
	printf("\n** 追加総合演習２開始 **\n\n");
	printInfo();
    while ((c = fgetc(fp)) != EOF) {
    	if(cnt == 0) {
    		printf("%08d", add);
    		printf("|");
    		add += 10;
    	}
    	printf("%2X ", c);
    	cnt += 1;
	    if (isprint(c) != 0){
	    	ungetc('c', stdin);
	    	StringArray[cnt] = c;
	    } else {
	    	ungetc('.', stdin);
	    	StringArray[cnt] = (int)'.';
	    }
    	if (cnt == 16) {
    		printf("|");
    		for (i = 0; i <= cnt; i++) {
    			printf("%c", StringArray[i]);
    		}
    		cnt = 0;
    		printf("\n");
    	}
    }
	if (cnt < 16) {
		for (i = 0; i < (16 - cnt); i++) {
    		printf("   ");
		}
		printf("|");
    	for (i = 0; i <= cnt; i++) {
    		printf("%c", StringArray[i]);
    	}
    	cnt = 0;
    	printf("\n");
    }
	printf("\n** 追加総合演習２終了 **\n");
	
    fclose(fp);

    return 0;
}

void printInfo(void)
{
	int i;
	
	printf("アドレス|データの16進数表示                              |文字表示\n");
	for (i = 0; i < 8; i++){
		printf(" ");
	}
	printf("|");
	for (i = 0; i < 16; i++){
		printf("%2X ", i);
	}
	printf("| ");
	for (i = 0; i < 16; i++){
		printf("%X", i);
	}
	printf("\n");
	
	for (i = 0; i < 8; i++){
		printf("-");
	}
	printf("+");
	for (i = 0; i < 16; i++){
		printf("---");
	}
	printf("+-");
	for (i = 0; i < 16; i++){
		printf("-");
	}
	printf("\n");
	
}
