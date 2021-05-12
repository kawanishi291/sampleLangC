#include <stdio.h>
#include <math.h>
  
void main(){
    double v0;
    double y;
    double vy;
    int flag;

    printf("v0 => \n");
    scanf("%lf", &v0);
    if (v0 == 0) {
        flag = 0;
    } else if (v0 > 0) {
        flag = 1;
    } else {
        flag = 2;
    }
    printf("y => \n");
    scanf("%lf", &y);
    vy = v0 * sin(y);
    switch (flag) {
        case 0:
            printf("v y = 0");
            break;
        case 1:
            printf("v y = %f\n", (vy - v0) * sin(y));
            break;
        default:
            printf("v y = %f\n", (-v0) * sin(y));
            break;
    }
    
}