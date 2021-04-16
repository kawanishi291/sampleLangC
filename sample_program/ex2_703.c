#include <stdio.h>
#include <math.h>

struct S_POINT {
    int x;
    int y;
};

int main(void) {
    int dx;
    int dy;
    struct S_POINT point1 = {
        100,
        80
    };
    struct S_POINT point2 = {
        320,
        250
    };
    struct S_POINT *p1 = &point1;
    struct S_POINT *p2 = &point2;
    dx = p1->x - p2->x;
    dx *= dx;
    dy = p1->y - p2->y;
    dy *= dy;

    printf("点(%d:%d)と、点(%d:%d)の距離は、%.2fです\n", p1->x, p1->y, p2->x, p2->y, sqrt(dx + dy));

    return 0;
}