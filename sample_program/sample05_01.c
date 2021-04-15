#include <stdio.h>
#include <time.h>

void setAge(int *, int *, int *, int *);
int nowDays(int* , int* , int*);

struct data {
    char name[32];
    int year;
    int month;
    int day;
    int age;
} people[3];

int main(void) {
    int i;
	
    for(i = 0; i < 3; i++){
        printf("名前\n");
        scanf("%s", people[i].name);
        printf("年\n");
        scanf("%d", &people[i].year);
        printf("月\n");
        scanf("%d", &people[i].month);
        printf("日\n");
        scanf("%d", &people[i].day);
        setAge(&people[i].year, &people[i].month, &people[i].day, &people[i].age);
    }
	for(i = 0; i < 3; i++){
	    printf("%sの誕生日は、%d年%d月%d日です。\n%d歳です。\n", people[i].name, people[i].year, people[i].month, people[i].day, people[i].age);
	}

	return 0;
}


void setAge(int *y, int *m, int *d, int *a) {
	int nowY, nowM, nowD;
	int i;
	
	nowDays(&nowY, &nowM, &nowD);
	*a = nowY - *y;
	if(*m > nowM){
		*a = *a - 1;
	}else if(*m == nowM){
		if(*d > nowD){
			*a = *a - 1;
		}
	}

}

int nowDays(int* p1, int* p2, int*p3){
	time_t timeValue;
    struct tm *timeObject;
	int year;
	int month;
	int day;

    time(&timeValue);
    timeObject = localtime(&timeValue);

	year = timeObject->tm_year + 1900;
    month = timeObject->tm_mon + 1;
    day = timeObject->tm_mday;
	
	// printf("今日は%d/%d/%dです。\n", year, month, day);
	*p1 = year;
	*p2 = month;
	*p3 = day;
	
	return 0;
}
