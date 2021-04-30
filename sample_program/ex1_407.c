#include <stdio.h>


int main(void){
	/* switch文 */
	int num;
	
	printf("シフト番号を入力してください ");
	printf("=> ");
	scanf("%d", &num);
	
	switch (num){
		case 1:
			printf("日曜日\n");
			break;
		case 2:
			printf("月曜日と木曜日\n");
			break;
		case 3:
			printf("火曜日と金曜日\n");
			break;
		case 4:
			printf("水曜日と土曜日\n");
			break;
		default:
			printf("シフト勤務以外\n");
			break;
	}
	
	return 0;
}
