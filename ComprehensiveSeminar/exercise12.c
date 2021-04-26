#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getFunc.h"

#define ARRAY_AIZE (16)

void printArray(int *p);


int main(int argc, char *argv[]){
	char promptString[] = "文字を入力してください(98文字以内)\ninput => ";
    char inputArray[100];
    FILE *fp;
    int c;
	int i;
	int cnt = 0;
	int array[ARRAY_AIZE + 2];
	
	if (argc == 2) {
        strcpy(inputArray, argv[1]);
    } else {
    	getString(promptString, inputArray, 100);
    }
	
	fp = fopen(inputArray, "r");
    if (fp == NULL){
        printf("error\n");
        exit(1);
    }
#if 1
    while ((c = fgetc(fp)) != EOF) {
	    if (isprint(c) != 0){
			printf("%X ", c);
	    	array[cnt] = c;
	    	cnt += 1;
	    } else {
	    	array[cnt] = (int)'\n';
	    	//ungetc('.', fp);
	    }
    	if (cnt == 16) {
    		printf("\t");
    		printArray(array);
			printf("\n");
    		cnt = 0;
		}
    }
#endif
    fclose(fp);

    return 0;
}


void printArray(int *p){
	int i;
	
	for (i = 0; i < ARRAY_AIZE; i++) {
		if (isprint(p[i]) != 0) {
    		printf("%c", p[i]);
		} else {
			printf(".");
		}
    }
}
