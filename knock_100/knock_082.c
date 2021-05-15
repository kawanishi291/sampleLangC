/*
パスカルの三角形とは、1段目は1のみ、2段目からは段の数だけ数字が並び、両端は1、その間は左上と右上の値を足した値、として作っていった数字の並びである。
このパスカルの三角形を15段まで計算して表示するプログラムを作成せよ。
ただし表示は左詰で値はスペースで区切って表示するのでよい（三角形に並べなくてもよい）。
*/
#include <stdio.h>

void setPascalsTriangle(int num, int *pre, int *tmp);
void arrayCopy(int num, int *pre, int *tmp);
void arrayPrint(int num, int *pre);

int main(void) {
    int array_pre[20];
    int array[20];
    int array_tmp[20];
    int i;
    int num;
    
    array_pre[0] = 1;
    array_pre[1] = 1;
    printf("%4d", 1);
    arrayPrint(num, array_pre);
    for (num = 3; num <= 15; num++) {
        setPascalsTriangle(num, array_pre, array_tmp);
        arrayCopy(num, array_pre, array_tmp);
        arrayPrint(num, array_pre);
    }

    return 0;
}


void setPascalsTriangle(int num, int *pre, int *tmp)
{
    int i;

    for (i = 0; i < num; i++) {
        if (i == 0) {
            tmp[0] = 1;
        } else if (i == num - 1) {
            tmp[num - 1] = 1;
        } else {
            tmp[i] = pre[i - 1] + pre[i];
        }
    }
}

void arrayCopy(int num, int *pre, int *tmp)
{
    int i;

    for (i = 0; i < num; i++) {
        pre[i] = tmp[i];
    }
}


void arrayPrint(int num, int *pre)
{
    int i;

    for (i = 0; i < num; i++) {
        printf("%4d ", pre[i]);
    }
    printf("\n");
}