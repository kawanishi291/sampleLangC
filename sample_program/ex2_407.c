#include <stdio.h>

int main(void) {
    int hour;

    printf("入場時刻を入力してください\n");
    scanf("%d", &hour);
    
    switch(hour){
        case 13:
            printf("コンピュータ基礎\nプログラム開発基礎\nC言語基礎\nC言語プログラミング\nポインタ特訓\n");
            break;
        case 14:
            printf("プログラム開発基礎\nC言語基礎\nC言語プログラミング\nポインタ特訓\n");
            break;
        case 15:
            printf("C言語基礎\nC言語プログラミング\nポインタ特訓\n");
            break;
        case 16:
            printf("C言語プログラミング\nポインタ特訓\n");
            break;
        case 17:
            printf("ポインタ特訓\n");
            break;
        default :
            printf("講座は終了しています\n");
            break;
    }
}