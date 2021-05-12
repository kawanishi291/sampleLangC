#include <stdio.h>
#include <math.h>
  
void main(){
    double v0;
    double y;
    double vy;

    printf("v0 => \n");
    scanf("%lf", &v0);
    printf("y => \n");
    scanf("%lf", &y);
    vy = v0 * sin(y);
    if (v0 == 0) {
        printf("v y = 0");
    } else if (v0 > 0) {
        printf("v y = %f\n", (vy - v0) * sin(y));
    } else {
        printf("v y = %f\n", (-v0) * sin(y));
    }
    
}