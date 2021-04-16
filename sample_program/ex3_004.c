#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i;
    int len;
    int sum;
    int tmp;
    char str[100];
    
    printf("10文字以内の数字を入力してください \n => \n");
    scanf("%s", str);
    len = strlen(str);
    sum = atoi(str);
    tmp = 0;
    do{
        tmp = (sum % 10) + tmp;
        sum = sum / 10;
    }while(sum != 0);
    tmp %= 10;
    printf("%s%d\n", str, tmp);


    return 0;
}