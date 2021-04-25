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


int main(void){
    int result;
    int i;
    ST_TEST students[STUDENT_SIZE];

    result = inputData(students);
    printf("name\tpoint\n");
    for(i = 0; i < 22; i++){
        printf("-");
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%d\n", students[i].name, students[i].point);
    }
    
    return 0;
}

int inputData(ST_TEST *pTest){
    char promptMessage[] = "<5件分のデータを入力してください>\nname => \n";
    char inputArray[100];
    int cnt = 0;
    int result;
    int point;

    while (cnt < 5) {
        result = getString(promptMessage, inputArray, 100);
        if (result >= 0) {
            strcpy(pTest[cnt].name, inputArray);
            strcpy(promptMessage, "point => \n");
        }
        point = getNumber(promptMessage, 0, 100);
        if (point >= 0) {
            pTest[cnt].point = point;
            strcpy(promptMessage, "name => \n");
        }
        cnt += 1;
    }

    return 0;
}