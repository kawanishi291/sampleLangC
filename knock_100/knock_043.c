/*
2次方程式 ax^2 + bx + c = 0 （x^2はxの2乗の意味）の係数a, b, cを入力し、
2次方程式の解が2つの実数解か、重解か、2つの虚数解かを判別するプログラムを作成せよ。
*/
# include <stdio.h>

int main(){
    float a, b, c;
    float discriminant;
    
    printf("input a:\n");
    scanf("%f", &a);
    printf("input b:\n");
    scanf("%f", &b);
    printf("input c:\n");
    scanf("%f", &c);
    
    /* 判別式を計算 */
    discriminant = b * b - 4 * a * c;
    /* 判別式に数値による条件分岐 */
    if ( discriminant > 0 ) {
        printf("2つの実数解\n");
    } else if ( discriminant == 0 ) {
        printf("重解\n");
    } else {
        printf("2つの虚数解\n");
    }
    
    return 0;
}

