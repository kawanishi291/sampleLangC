#include <stdio.h>

int main(void) {
	int buf[10] = {5, 9, -3, 11, 94, 32, 105, 54, 3, 11};
	int ans[10];
	int i;
	int j;
	int cnt;
	
	for(i = 0; i < 10; i++){
		printf("%d\t", buf[i]);
	}
	printf("\n");
	
	for(i = 0; i < 10; i++){
		cnt = 0;
		for(j = 0; j < 10; j++){
			if(buf[i] > buf[j]){
				cnt = cnt + 1;
			}
		}
		if(buf[i] < 0 || buf[i] > 100){
			cnt = 0;
		}
		ans[i] = cnt;
		printf("%d\t", ans[i]);
	}
	printf("\n");
	

    return 0;
}
