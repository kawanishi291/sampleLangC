#include <stdio.h>
#include <string.h>
#include "getFunc.h"
#include "dayDuty.h"
#include "studentMaster.h"


int main(void){
	char promptMessage[] = " => \n";
	int day = -1;
	int studentCode = -1;
	int i;
	
#if 1
	// 0が入力されるまで処理を続ける (関数を呼ぶ)
	while (1) {
		while (day == -1) {
			day = getDayNumber(promptMessage, 0, 31);
		}
		if (day == 0) {
			break;
		}
		while (studentCode == -1) {
			studentCode = getDayNumber(promptMessage, 101, 110);
		}
		addDayDuty(day, studentCode);
		day = -1;
		studentCode = -1;
		printDayDuty();
	}
#endif
    return 0;
}


