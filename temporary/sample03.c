#include <stdio.h>
#include <time.h>

void nowTime(int *p_y, int *p_m, int *p_d);

int main(){
    int i;
    int set_list[3];
    int now_list[3];
    

    scanf("%d %d %d", &set_list[0], &set_list[1], &set_list[2]);
    printf("%d%d%d\n", set_list[0], set_list[1], set_list[2]);
    nowTime(&now_list[0], &now_list[1], &now_list[2]);
    printf("%d%d%d\n", now_list[0], now_list[1], now_list[2]);

    return 0;
}


 
void nowTime(int *p_y, int *p_m, int *p_d)
{
    time_t timer;
    struct tm *local;
     
    timer = time(NULL);
    local = localtime(&timer);
    *p_y = local->tm_year + 1900;        /* 1900年からの年数が取得されるため */
    *p_m = local->tm_mon + 1;        /* 0を1月としているため */
    *p_d = local->tm_mday;
}