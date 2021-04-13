#include <stdio.h>

int main(void) {
    int year;

    printf("西暦(1〜9999)を入力してください\n");
    scanf("%d", &year);
    
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("%d年は、うるう年です。\n", year);
    }
}