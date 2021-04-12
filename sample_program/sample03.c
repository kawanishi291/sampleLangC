#include <stdio.h>


int main(void) {
	int array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i = 0;
	int month = 1;
	int day = 0;
	int sum = 0;
	
	for(;;){
	    scanf("%d", &month);
		printf("月\n");
	    if (month == 0){
	    	printf("終了");
			break;
	    }else{
			scanf("%d", &day);
			printf("日\n");
			month = month - 1;
			sum = 0;
			for (i = 0; i < month; i++){
				// printf("%d\n", array[i]);
				sum = sum + array[i];
			}
			sum = sum + day;
			printf("%d日\n", sum);
	    }
	}

    return 0;
}