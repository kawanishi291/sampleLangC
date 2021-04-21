#include <stdio.h>
#include <string.h>
#include "getFunc.h"

int getString(char *prompt, char *buffer, int size)
{
    int len;
    int flag;

    flag = 0;
    while(flag == 0){
        printf("文字を入力してください(98文字以内)\n%s\n", prompt);
        fgets(buffer, size, stdin);
        len = strlen(buffer);
        if (buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
            printf("%d文字\n",len);
            flag = 1;
        } else {
            printf("98オーバー!!%d文字\n", len);
            while (getchar () != '\n') {
            }
        }
    }

    return 0;
}