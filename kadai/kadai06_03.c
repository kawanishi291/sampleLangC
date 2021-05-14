#include <stdio.h>
#include <math.h>

void yomi(double *p1, double *p2);
int keisan(double v0, double y);
void hyoji(double result);

int main(void){
    double v0;
    double y;

    yomi(&v0, &y);
    y = keisan(v0, y);
    hyoji(y);

    return 0;
}


void yomi(double *p1, double *p2)
{
    printf("v0 => \n");
    scanf("%lf", p1);
    printf("y => \n");
    scanf("%lf", p2);
}


int keisan(double v0, double y)
{
    y = v0 * sin(y);

    return y;
}

void hyoji(double result)
{
    printf("v y = %.2f\n", result);
}