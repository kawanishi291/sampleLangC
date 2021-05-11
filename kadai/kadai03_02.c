#include <stdio.h>

void main(){
    char str[3];

    printf("英字1文字を入力してください => \n");
    scanf("%c", str);
    
    if ('A' <= str[0] && str[0] <= 'Z') {
        printf("%c", str[0]);
    } else if ('a' <= str[0] && str[0] <= 'z') {
        printf("%c", str[0] + 'A' - 'a');
    } else {
        printf("error");
    }

}