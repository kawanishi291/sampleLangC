#include <stdio.h>

int min3(int x, int y, int z);

int main(){
    int x;
    int y;
    int z;

    printf("x");
    scanf("%d", &x);
    printf("y");
    scanf("%d", &y);
    printf("z");
    scanf("%d", &z);
    min3(x, y, z);

    return 0;
}

int min3(int x, int y, int z)
{
    int tmp;

    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }
    if (y > z) {
        tmp = y;
        y = z;
        z = tmp;
    }
    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d, %d, %d", x, y, z);

    return 0;
}