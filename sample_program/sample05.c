#include <stdio.h>
#include <time.h>


int main(void) {
	char str;
	int year;
	int month;
	int day;
	int age;
	
	printf("年\n");
	year = setNum();
	printf("月\n");
	month = setNum();
	printf("日\n");
	day = setNum();
	age = setAge(year, month, day);
	
	
	printf("私の誕生日は、%d年%d月%d日です。\n%d歳です。\n", year, month, day, age);
	
	return 0;
}

int setNum() {
	int num;
	
	scanf("%d", &num);
	
	return num;
}

int setAge(int y, int m, int d) {
	int a;
	int nowY, nowM, nowD;
	int i;
	
	nowDays(&nowY, &nowM, &nowD);
	a = nowY - y;
	if(m > nowM){
		a = a - 1;
	}else if(m == nowM){
		if(d > nowD){
			a = a - 1;
		}
	}
	
	return a;
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
	
	printf("今日は%d/%d/%dです。\n", year, month, day);
	*p1 = year;
	*p2 = month;
	*p3 = day;
	
	return 0;
}
