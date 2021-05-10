#include <stdio.h>

void main(){
    char name[100];

    printf("名前を入力してください => \n");
    scanf("%s", name);
    printf("%sさん\n", name);

}