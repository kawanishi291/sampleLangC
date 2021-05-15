/*
整数値を入力させ、1から9まで、入力値と入力値+1以外を表示するプログラムを作成せよ。入力値が9の場合は9のみ表示しない。
*/
# include <stdio.h>

int main(){
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int i;

    printf("input number:\n");
    scanf("%d", &i);
    printf("array[%d] = %d\n", i, array[i]);
    

    return 0;
}