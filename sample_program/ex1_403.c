#include <stdio.h>


int main(void){
	/* if～else文 */
	int age;
	
	printf("年齢を入力してください ");
	printf("=> ");
	scanf("%d", &age);
	
	if(age >= 15){
		printf("15歳以上なので閲覧できます\n");
	}else{
		printf("15歳未満なので閲覧禁止です\n");
	}
	return 0;
}
