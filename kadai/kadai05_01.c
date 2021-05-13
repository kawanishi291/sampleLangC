#include <stdio.h>
  
int main(){
    int i;
    int j;
    int cnt;

    for (i = 2; i <= 40; i++) {
        cnt = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt ++;
            }
        }
        if (cnt == 2) {
            printf("%d, ", i);
        }
    }

    return 0;
}