#include <stdio.h>

void BinaryConversion(int num);

void main(){
    int a;
    char b;
    char c;
    
    printf("数値を入力してください => \n");
    scanf("%d", &a);
    printf(" short int = %d\n", a);
    printf(" unsigned int = %x\n", a);
    BinaryConversion(a);
    b = (char)a << 4;
    printf("4ビット左シフト\n");
    printf(" short int = %d\n", b);
    printf(" unsigned int = %x\n", b);
    BinaryConversion((int)b);
    c = (char)a >> 4;
    printf("4ビット右シフト\n");
    printf(" short int = %d\n", c);
    printf(" unsigned int = %x\n", c);
    BinaryConversion((int)c);

}

void BinaryConversion(int decimal)
{
    int binary = 0;
    int base = 1;

    /* 10進数を2進数に変換 */
    while(decimal>0){
        binary = binary + ( decimal % 2 ) * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    
    /* 変換した2進数の出力 */
    printf(" 2進数 [%8d]\n", binary);
}