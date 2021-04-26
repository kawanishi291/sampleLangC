#include <stdio.h>
#include <string.h>
#include "getFunc.h"

#define NAME_LEN (20 + 2) /* 名前 20+\n+\0 */
#define STUDENT_SIZE (5)

/* テスト点数管理構造体 */
typedef struct ST_TEST ST_TEST;
struct ST_TEST {
    char name[NAME_LEN];/* 名前 */
    int point;			/* 得点 */
	ST_TEST *pNEXT;		/* 次へのポインタ */
};

int inputData(ST_TEST *pTest);
void printData(ST_TEST *pTest);



int main(void){
	int result;
    int i;
    ST_TEST students[STUDENT_SIZE];
	int type = 1;
	
	while(1){
		printf("<<メニュー選択>>\n1:追加 2:削除 0:終了 => ");
		scanf("%d", &type);
		if (type == 0) {
			break;
		} else if (type == 1) {
	    	result = inputData(&students[0]);
			printf("%d", result);
			printData(students);
		} else {
			// 削除
		}
	}
    return 0;
}


/* データ入力関数 */
int inputData(ST_TEST *pTest){
    char promptMessage[] = "名前 => ";
    char inputArray[100];
    int result = -1;
    int point = -1;

    while (result < 0) {
		result = getString(promptMessage, inputArray, 100);
    	printf("%d", result);
    	if (result >= 0) {
    		strcpy(pTest->name, inputArray);
    		strcpy(promptMessage, "点数 => ");
    	}
    }
	while (point < 0) {
    	point = getNumber(promptMessage, 0, 100);
		printf("%d", point);
		if (point >= 0) {
			pTest->point = point;
			strcpy(promptMessage, "名前 => ");
		}
	}
	printf("\n");
	pTest->pNEXT = pTest+1;

    return 0;
}


/* データ出力関数 */
void printData(ST_TEST *pTest){
	int i;
	
	printf("\nname\tpoint\n");
    for(i = 0; i < 22; i++){
        printf("-");
    }
	printf("\n");
    for (i = 0; i < STUDENT_SIZE; i++) {
        printf("%s\t%d\t%d\t%d\n", pTest[i].name, pTest[i].point, pTest[i].pNEXT, pTest[i]);
    }
	printf("\n");
}