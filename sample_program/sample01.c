#include <stdio.h>

int main(void) {
    int array[10];
    int num;
	int i;
	int max = 0;
    int min = 100;
    int sum = 0;
	int j;

    for (i = 0; i < 10; i++){
        printf("・%d回目数値入力\n", i+1);
        scanf("%d", &num);
        array[i] = num;
    }

    for (j = 0; j < 10; j++){
        if (max < array[j]){
            max = array[j];
        }
        if (min > array[j]){
            min = array[j];
        }
        sum = sum + array[j];
    }
    printf("最大値は%d\n", max);
    printf("最小値は%d\n", min);
    printf("合計値は%d\n", sum);

    return 0;
}