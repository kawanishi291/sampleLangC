#include <stdio.h>

int main(void) {
    int i;
    int j;
    int sum;
    int cnt;
    int array[100001+1];

    array[0] = 0;
    cnt = 0;
    printf("\n完全数 -> ");
    for(i = 1; i <= 10000; i++){
        sum = 0;
        for(j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            } 
        }
        array[i] = sum;
        if(i == sum){
            printf("%d, ", i);
            cnt += 1;
        }
    }
    printf("\n1~10000までに、完全数は%d個存在しました\n", cnt);

    cnt = 0;
    printf("\n友愛数 -> ");
    for(i = 1; i <= 10000; i++){
        if(i == array[array[i]] && i != array[i] && i < array[i]){
            printf("(%d:%d), ", i, array[i]);
            cnt += 1;
        }
    }
    printf("\n1~10000までに、友愛数は%d組存在しました\n", cnt);

    return 0;
}

//i                 220
//array[i]          284
//array[array[i]]   220