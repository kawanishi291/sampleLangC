#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int len;
    int diff;
    char str[100];
    
    diff = 'a' - 'A';
    printf("文字(99文字まで)を入力してください \n => \n");
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++){
        if('A' <= str[i] && str[i] <= 'Z'){
            str[i] += diff;
        }else if('a' <= str[i] && str[i] <= 'z'){
            str[i] -= diff;
        }
    }
    printf("%s", str);

    return 0;
}