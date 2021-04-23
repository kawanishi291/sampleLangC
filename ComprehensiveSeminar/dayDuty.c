#include <stdio.h>
#include <string.h>
#include "dayDuty.h"
#include "studentMaster.h"

/* 当月日直データ(構造体配列) */
static NICHOKU_BUFFER nBuffer[BUFFER_SIZE];

char studentName[32];


void addDayDuty(int day, int studentCode)
{
	int i;
	int flag = 0;
	
	for (i = BUFFER_SIZE - 1; i >= 0; i--){
		if (nBuffer[i].day == 0) {
			nBuffer[i].day = day;
			nBuffer[i].studentCode = studentCode;
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		for (i = BUFFER_SIZE - 1; i >= 0; i--) {
			nBuffer[i].day = nBuffer[i-1].day;
			nBuffer[i].studentCode = nBuffer[i-1].studentCode;
		}
		nBuffer[0].day = day;
		nBuffer[0].studentCode = studentCode;
	}
	
#if 0
	for (i = 0; i < BUFFER_SIZE; i++){
		printf("%d-%d\n", nBuffer[i].day, nBuffer[i].studentCode);
	}
#endif
}


void printDayDuty(void)
{
	int i;
	
	#if 1
	for (i = 0; i < BUFFER_SIZE; i++){
		if (nBuffer[i].day != 0) {
			getStudentName(nBuffer[i].studentCode, studentName);
			printf("%d日：%s\n", nBuffer[i].day, studentName);

		}
	}
#endif
}
