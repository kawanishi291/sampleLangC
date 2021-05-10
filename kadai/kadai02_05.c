#include <stdio.h>

void main(){
    double english;
    double japanese;
    double math;

    printf("英語 => \n");
    scanf("%lf", &english);
    printf("国語 => \n");
    scanf("%lf", &japanese);
    printf("数学 => \n");
    scanf("%lf", &math);
    printf("平均点：%.2f", (english + japanese + math) / 3);

}