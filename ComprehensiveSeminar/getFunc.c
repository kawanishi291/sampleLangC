#include <stdio.h>
#include <string.h>
#include "getFunc.h"

int getString(char *prompt, char *buffer, int size)
{
    int len;
    int flag = -1;
	
	if (size >= 2 && buffer != NULL){ 
		if (prompt == NULL) {
			printf("=> ");
		} else {
			printf("%s", prompt);
		}
	    while(flag == -1){
	        fgets(buffer, size, stdin);
	        len = strlen(buffer);
	        if (buffer[len - 1] == '\n') {
	            buffer[len - 1] = '\0';
	            flag = 0; //正常系の値0を代入し、ループを抜ける
	        } else {
	        	// エラーメッセージの代入
	        	prompt = "<98文字以内で入力してください>\ninput => ";
	            printf("%s", prompt);
	        	// バッファをクリア
	            while (getchar () != '\n') {
	            }
	        }
	    }
	}

    return flag;
}