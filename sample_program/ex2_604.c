#include <stdio.h>

void displayNumberOfDays(int *, int);

int main(void) {
    int daysTable[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int num;
    
    printf("何月の日数ですか? => ");
    scanf("%d", &num);
    displayNumberOfDays(&daysTable[0], num);

    return 0;
}

void displayNumberOfDays(int *daysTable, int month){

    printf("%d月は%d日あります\n", month, daysTable[month-1]);

}