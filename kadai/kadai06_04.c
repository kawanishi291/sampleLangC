#include <stdio.h>

char cap(char str);

int main(void){
    char str[3];

    printf("小文字1英字を入力してください => \n");
    scanf("%c", str);
    str[0] = cap(str[0]);
    printf("変換後 => %c\n", str[0]);

    return 0;
}


char cap(char str)
{
    if ('a' <= str && str <= 'z') {
        str += 'A' - 'a';
    } else {
        printf("error");
    }

    return str;
}