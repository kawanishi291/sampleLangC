#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "getFunc.h"

int getString(char *prompt, char *buffer, int size)
{
    int len;
    int flag = -1;
	
	if (size >= 2 && buffer != NULL) { 
		if (prompt == NULL) {
			printf("=> ");
		} else {
			printf("%s", prompt);
		}
	    while(flag == -1) {
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

int getNumber(char *prompt, int minValue, int maxValue)
{
	char buffer[4];
    int result = -1;
	int len;
	
 
	if (prompt == NULL) {
		printf("=> ");
	} else {
		printf("%s", prompt);
	}
	fgets(buffer, 4, stdin);
	len = strlen(buffer);
	if (buffer[len - 1] == '\n') {
		buffer[len - 1] = '\0';
		result = atoi(buffer);
	} else {
		while (getchar () != '\n') {
		}
	}
    /* エラー処理 */
	if (minValue > result || result > maxValue) { // 0未満・10より大きい数値が入力された場合
		result = 11;
        prompt = "<0～10の範囲で入力してください>\n";
        printf("%s", prompt);
	} else if (buffer[0] == '\0') { // 1つも入力されずにEnterkeyが押された場合
		result = -1;
	} else if (result == 0 && buffer[0] != '0') { // 数値以外が入力された場合
        result = 11;
        prompt = "<'0'～'9'以外の文字を入力しないでください>\n";
        printf("%s", prompt);
    }

    return result;
}

int getDayNumber(char *prompt, int minValue, int maxValue)
{
	char buffer[10];
    int result = -1;
	int len;
#if 0
	int i;
#endif
 
	if (prompt == NULL) {
		printf("=> ");
	} else if (maxValue == 31) {
		printf("日%s", prompt);
	} else {
		printf("学生番号%s", prompt);
	}
	fgets(buffer, 10, stdin);
	len = strlen(buffer);
	if (buffer[len - 1] == '\n') {
		buffer[len - 1] = '\0';
		result = atoi(buffer);
	} else {
		while (getchar () != '\n') {
		}
	}
#if 0	
	printf("%d\n", result);
	for (i = 0; i < 4; i++){
		printf("%d%d%d%d", buffer[0], buffer[1], buffer[2], buffer[3]);
	}
#endif
    /* エラー処理 */
	if (buffer[0] == '\0') { // 1つも入力されずにEnterkeyが押された場合
		result = -1;
	} else if (result <= 0 && buffer[0] != '0') { // 数値以外が入力された場合
        result = -1;
        prompt = "<'0'～'9'以外の文字を入力しないでください>\n";
        printf("%s", prompt);
    } else if (minValue > result || result > maxValue) { // 0未満・10より大きい数値が入力された場合
		result = -1;
    	if (maxValue == 31){
        	prompt = "<0～31の範囲で入力してください>\n";
    	} else {
    		prompt = "<101～110の範囲で入力してください>\n";
    	}
        printf("%s", prompt);
    }

    return result;
}
