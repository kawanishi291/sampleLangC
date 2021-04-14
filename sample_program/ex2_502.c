#include <stdio.h>


int main(void) {
    char str[] = "12345";
    char *p = str;
    int i, j;
    char tmp;

    for(i = 0; i < 5; i++){
        j = i;
        do{
            tmp = *(p + j);
            j++;
            printf("%c", tmp);
        }while(tmp != '\0');
        printf("\n");
    }

    return 0;
}