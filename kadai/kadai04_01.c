#include <stdio.h>
#include <math.h>
  
int main(){
    double v0;
    double y;

    printf("v0 => \n");
    scanf("%lf", &v0);
    if (v0 == 0) {
        return 1;
    }
    printf("y => \n");
    scanf("%lf", &y);
    y = v0 * sin(y);
    printf("v y = %f\n", y);

    return 0;

}