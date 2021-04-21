#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    int sum;

    if (argc == 1) {
        printf("コマンドライン引数エラー：数値入力して下さい");
    } else {
        sum = 0;
        for (i = 1; i < argc; i++) {
            if (i == argc - 1) {
                printf("%s = ", argv[i]);
            } else {
                printf("%s + ", argv[i]);
            }
            sum += atoi(argv[i]);
        }
        printf("%d", sum);
    }

    return 0;
}