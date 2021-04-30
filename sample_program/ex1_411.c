#include <stdio.h>


int main(void){
	/* for文 */
	int i;
	int stature[10] = {173, 168, 167, 155, 177, 170, 172, 167, 178, 175};
	int max;
	int min;
	
	max = stature[0];
	min = stature[0];
	
	for(i = 1; i < 10; i++){
		if(max < stature[i]){
			max = stature[i];
		}
		if(min > stature[i]){
			min = stature[i];
		}
	}
	
	printf("最大値は%d、最小値は%dです\n", max, min);
	
	return 0;
}
