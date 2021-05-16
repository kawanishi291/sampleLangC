/*
西暦を入力したらその年が閏（うるう）年かどうかを判定するプログラムを作成せよ。
なお、4で割り切れる年のうち、100で割り切れないか、400で割り切れる年は閏年である。
*/
# include <stdio.h>

int main(){
    int num;

    printf("input year:\n");
    scanf("%d", &num);
    if (num % 4 == 0 && num % 100 != 0 || num % 400 == 0) {
        printf("%d年は閏年である\n", num);
    } else {
        printf("%d年は閏年でない\n", num);
    }

    return 0;
}

