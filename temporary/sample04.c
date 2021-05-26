#include <stdio.h>
#include <time.h>

int countLeapYear(int base, int now);
int calDays(int *p_m, int *p_d);

int array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int i;
    int base_list[3];
    int now_list[3];
    int cnt;
    int days;

    printf("開始 => \n");
    scanf("%d %d %d", &base_list[0], &base_list[1], &base_list[2]);
    printf("終了 => \n");
    scanf("%d %d %d", &now_list[0], &now_list[1], &now_list[2]);
    printf("%d年%d月%d日〜", base_list[0], base_list[1], base_list[2]);
    printf("%d年%d月%d日\n", now_list[0], now_list[1], now_list[2]);
    cnt = countLeapYear(base_list[0], now_list[0]);
    days = (now_list[0] - base_list[0]) * 365 + cnt;
    days -= calDays(&base_list[1], &base_list[2]);
    days += calDays(&now_list[1], &now_list[2]);
    printf("%d日\n", days);

    return 0;
}



// 閏年カウント関数
int countLeapYear(int base, int now){
    int i;
    int cnt = 0;

    for(i = base; i <= now; i++){
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
            cnt += 1;
        }
    }

    return cnt;
}

int calDays(int *p_m, int *p_d)
{
    int i;
    int cnt = 0;

    for (i = 0; i < *p_m; i++) {
        cnt += array[i];
    }
    cnt += *p_d;
    
    return cnt;
}