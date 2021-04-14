#include <stdio.h>


int main(void) {
    char sWeek[7][10] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDA"
    };
    char *s_p[7];
    int i;

    // 代入
    for(i = 0; i < 7; i++){
        s_p[6-i] = &sWeek[i][0];
    }
    // 表示
    for(i = 0; i < 7; i++){
        printf("%s\n", *(s_p + i));
    }

    return 0;
}