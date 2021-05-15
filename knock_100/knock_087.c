/*
カバラ数秘術という簡単な占いがある。誕生日を年（西暦）・月・日で表し、それぞれの数字を足し合わせる。
合計した数字が10以上であれば、再びすべての桁の数字を足し合わせる。
これを1桁の数字になるまで繰り返し、得られた数字を運命数とする。
ただし、計算途中で11、22、33のようにゾロ目の数字になった場合は、それを運命数とする。
    例：2015年12月23日→2+0+1+5+1+2+2+3=16→1+6=7
運命数を計算するプログラムを作成せよ。
*/
#include <stdio.h>

int calculator(int num, int cnt, int birthday);
int checkSUM(int sum);

int main(){
    int i;
    int num = 10000000;
    int cnt = 8;
    int sum;
    int birthday;
    int flag;

    printf("誕生日をYYYYMMDDの形式で入力してください:\n");
    scanf("%d", &birthday);
    do {
        sum = calculator(num, cnt, birthday);
        flag = checkSUM(sum);
        num = 10;
        cnt = 2;
        birthday = sum;
    } while (flag == 0);
    

    return 0;
}


int calculator(int num, int cnt, int birthday)
{
    int i;
    int sum = 0;

    for (i = 0; i < cnt; i++) {
        sum += birthday / num;
        birthday -= (birthday / num) * num;
        num /= 10;
    }

    return sum;
}

int checkSUM(int sum)
{
    if (sum < 10) {
        printf("運命数は%d\n", sum);
        return 1;
    } else if (sum / 10 == sum % 10) {
        printf("運命数は%d\n", sum);
        return 1;
    } else {
        return 0;
    }
}