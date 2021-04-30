#include <stdio.h>


int main(void){
	/* if～else if～else文 */
	int age;
	
	printf("年齢を入力してください ");
	printf("=> ");
	scanf("%d", &age);
	
	if(age < 7){
		printf("入場料は無料です\n");
	}else if(age >= 13){
		printf("入場料は1000円です\n");
	}else{
		printf("入場料は500円です\n");
	}
	return 0;
}
