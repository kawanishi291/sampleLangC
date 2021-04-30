#include <stdio.h>


int main(void){
	/* 多重ループ */
	int i, j, k;
	int inhabitant[2][3][5] = {
		{
			{3, 2, 2, 1, 2},
			{2, 2, 9, 1, 2},
			{1, 4, 2, 5, 3}
		},
		{
			{1, 2, 1, 2, 1},
			{2, 4, 4, 1, 2},
			{2, 1, 1, 3, 3}
		}
	};
	int sum = 0;
	
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 5; k++){
				sum += inhabitant[i][j][k];
			}
		}
	}
	printf("全部で%d人住んでいます\n", sum);
	
	return 0;
}
