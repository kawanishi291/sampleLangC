#include <stdio.h>
#include <string.h>


int main(void) {
    char str[100+1];
    int len;
    int i;

    printf("文字列(100字まで)を入力してください => \n");
    scanf("%s", str);
    len = strlen(str);
    for(i = 1; i <= len; i++){
        printf("%c", str[len - i]);
    }
    printf("\n");

    return 0;
}