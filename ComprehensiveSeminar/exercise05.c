#include <stdio.h>
#include <string.h>
#include "getFunc.h"

#define NAME_LEN (10 + 2) /* 名前 10+\n+\0 */
#define STUDENT_SIZE (5)

/* テスト点数管理構造体 */
typedef struct {
    char name[NAME_LEN]; /* 名前 */
    int point;           /* 得点 */
} ST_TEST;

int inputData(ST_TEST *pTest);
void sortPoint(ST_TEST *pTest);
void sortName(ST_TEST *pTest);
void printData(ST_TEST *pTest);


int main(void){
	int result;
    int i;
    ST_TEST students[STUDENT_SIZE];
	int type = 1;

    result = inputData(students);
	printData(students);
	while (1) {
		printf("1:点数順/ 2:名前順/ 0:終了 => \n");
		scanf("%d", &type);
		if (type == 1) {
			sortPoint(students);
			printData(students);
		} else if(type == 2) {
			sortName(students);
			printData(students);
		} else if (type == 0) {
			break;
		}
	}
    
    return 0;
}


/* データ入力関数 */
int inputData(ST_TEST *pTest){
    char promptMessage[] = "<5件分のデータを入力してください>\nname => \n";
    char inputArray[100];
    int cnt = 0;
    int result = -1;
    int point = -1;

    while (cnt < STUDENT_SIZE) {
    	while (result < 0) {
    		result = getString(promptMessage, inputArray, 100);
	        if (result >= 0) {
	            strcpy(pTest[cnt].name, inputArray);
	            strcpy(promptMessage, "point => \n");
	        }
    	}
    	while (point < 0) {
    		point = getPointNumber(promptMessage, 0, 100);
	        if (point >= 0) {
	            pTest[cnt].point = point;
	            strcpy(promptMessage, "name => \n");
	        }
    	}
        cnt += 1;
    	result = -1;
    	point = -1;
    	printf("\n");
    }

    return 0;
}

/* 点数順ソート関数 */
void sortPoint(ST_TEST *pTest){
	int i;
	int j;
	int tmp;
	char array[NAME_LEN];
	
	
	for (i = 0; i < STUDENT_SIZE - 1; i++) {
		for (j = i+1; j < STUDENT_SIZE; j++) {
			if (pTest[j].point > pTest[i].point){
				tmp = pTest[i].point;
				strcpy(array, pTest[i].name);
				pTest[i].point = pTest[j].point;
				strcpy(pTest[i].name, pTest[j].name);
				pTest[j].point = tmp;
				strcpy(pTest[j].name, array);
			}
		}
	}
}

/* 名前順ソート関数 */
void sortName(ST_TEST *pTest){
	int i;
	int j;
	int tmp;
	char array[NAME_LEN];
	
	
	for (i = 0; i < STUDENT_SIZE - 1; i++) {
		for (j = i+1; j < STUDENT_SIZE; j++) {
			if (strcmp(pTest[j].name, pTest[i].name) < 0){
				tmp = pTest[i].point;
				strcpy(array, pTest[i].name);
				pTest[i].point = pTest[j].point;
				strcpy(pTest[i].name, pTest[j].name);
				pTest[j].point = tmp;
				strcpy(pTest[j].name, array);
			}
		}
	}
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
        printf("%s\t%d\n", pTest[i].name, pTest[i].point);
    }
	printf("\n");
}
