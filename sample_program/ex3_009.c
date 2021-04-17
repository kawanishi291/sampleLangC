#include <stdio.h>

int countLeapYear(int);
void printCalendar(int, int, int, int *);

int main(){
    int i;
    int array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year;
    int month;
    int days;
    int cnt;
    int blank;

    printf("西暦 => \n");
    scanf("%d", &year);
    printf("月 => \n");
    scanf("%d", &month);
    cnt = countLeapYear(year);
    days = (year - 1900) * 365 + cnt;
    month -= 1;
    for(i = 0; i < month; i++){
        days += array[i];
    }
    blank = (days + 1) % 7; //1900/01/01は月曜日(+1)
    printCalendar(blank, year, month, array);

    return 0;
}

// カレンダー出力関数
void printCalendar(int blank, int year, int month, int *p){
    int i;
    int end;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 && month == 2){
        end = 1;
    }else{
        end = 0;
    }
    end += p[month];

    printf("--------------------\n");
    printf("日 月 火 水 木 金 土\n");
    for(i = 0; i < blank; i++){
        printf("   ");
    }
    for(i = 1; i <= end; i++){
        blank += 1;
        printf("%2d ", i);
        if(blank % 7 == 0){
            printf("\n");
        }
    }
    printf("\n\n");
}

// 閏年カウント関数
int countLeapYear(int year){
    int i;
    int cnt = 0;

    for(i = 1900; i <= year; i++){
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
            cnt += 1;
        }
    }

    return cnt;
}
