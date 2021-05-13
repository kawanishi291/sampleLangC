#include <stdio.h>
  
int main(){
    int n = 1;
    int sum = 1;

    while(sum < 1000) {
        n++;
        sum += n;
    }
    printf("%d\n", n - 1);

    return 0;
}