/*
まず開始値と終了値をそれぞれ入力させる。次に、開始値から終了値まで順に、3の倍数と3のつく数字のときは頭に"aho"と付けて表示するプログラムを作成せよ。
開始値と終了値の値の妥当性（例えば終了値の方が開始値よりも大きいか）チェックは省略してよい。
*/
# include <stdio.h>

int checkNumberIn3(int num);

int main(){
    int i;
    int start;
    int end;
    int flag;
    
    printf("start:\n");
    scanf("%d", &start);
    printf("end:\n");
    scanf("%d", &end);
    for (i = start; i <= end; i++) {
        if (i % 3 == 0) {
            printf("aho %d\n", i);
        } else {
            flag = checkNumberIn3(i);
            if (flag == 1) {
                printf("aho %d\n", i);
            } else {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}

int checkNumberIn3(int num)
{
    int flag = 0;

    while (num > 0) {
        if (num % 10 == 3) {
            flag = 1;
            break;
        }
        num -= num % 10;
        num /= 10;
    }

    return flag;
}