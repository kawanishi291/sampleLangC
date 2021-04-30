#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

int inputNameData(ST_TEST *pTest);
int inputPointData(ST_TEST *pTest);
void printData(int data, ST_TEST* list);
int DeleteData(ST_TEST* list, char *buffer);
ST_TEST* list_add(ST_TEST* list, char name[], int point);



int main(void){
	char promptMessage[] = "<<メニュー選択>>\n1:追加 2:削除 0:終了 => \n";
    char inputArray[100];
    int result = -1;
	int point = -1;
    int i;
	ST_TEST* list = NULL;
	int type = -1;
	int data = 5;
	
	
	
	while(1){
		while (type < 0 || 2 < type) {
			strcpy(promptMessage, "<<メニュー選択>>\n1:追加 2:削除 0:終了 => \n");
			type = getNumber(promptMessage, 0, 2);
		}
		if (type == 0) {
			break;
		} else if (type == 1) {
			while (result < 0) {
				strcpy(promptMessage, "名前 => \n");
				result = getString(promptMessage, inputArray, 100);
		    }
			while (point < 0 || 100 < point) {
				strcpy(promptMessage, "点数 => \n");
		    	point = getNumber(promptMessage, 0, 100);
			}
			if ((result >= 0) && (point >= 0)) {
				list = list_add(list,  inputArray, point);
				data -= 1;
			}
		} else {
			strcpy(promptMessage, "名前 => \n");
			result = getString(promptMessage, inputArray, 100);
			data += DeleteData(list, inputArray);
			printf("削除");
			strcpy(promptMessage, "<<メニュー選択>>\n1:追加 2:削除 0:終了 => \n");
		}
		printData(data, list);
		result = -1;
		point = -1;
		type = -1;
	}
    return 0;
}


/* データ出力関数 */
void printData(int data, ST_TEST* list)
{
	printf("\n 名前\t点数\n------------\n");
	while (1)
    {
        printf("%s\t%d\n", list->name, list->point);
        if (list->pNEXT != NULL) {
            list = list->pNEXT;
        } else {
        	printf("空きデータ数 %d\n\n", data);
            break;
        }
    }
}


/* リストに要素を追加する */
ST_TEST* list_add(ST_TEST* list, char name[], int point) {
    /* 新しい要素を作成 */
    ST_TEST* node = (ST_TEST*)malloc(sizeof(ST_TEST));
	strcpy(node->name, name);
    node->point = point;

    /* 次の要素がないことを示すために NULL を代入 */
    node->pNEXT = NULL;

    if (list == NULL) {
        /* リストが空の場合は特別扱いする */
        return node;
    }
    else {
        /* リストの末尾の要素を探す */
        ST_TEST* p = list;
        while (p->pNEXT != NULL) {
            p = p->pNEXT;
        }
        /* ここで変数 p は末尾の要素をさす */
        p->pNEXT = node;
        return list;
    }
}


/* データ削除関数 */
int DeleteData(ST_TEST* list, char *buffer)
{
	int i;
	int cnt = 0;
	int num = -1;
	int data;
	ST_TEST* tmp[5];
	
	while (1)
    {
		tmp[cnt] = list;
    	if (*list->name == *buffer) {
			num = cnt;
			// free(list);
    		// break;
    	}
        if (list->pNEXT != NULL) {
			cnt += 1;
            list = list->pNEXT;
        } else {
            break;
        }
    }
	if (num == cnt) {
		if (num != 0) {
			num = 6;
		} else {
			num = 7;
		}
	}
	switch (num) {
		case -1:
			data = 0;
			break;
		case 0:
			*tmp[0] = *tmp[1];
			free(&tmp[num]);
			data = 1;
			break;
		case 7:
			printf("%d\n",cnt);
			list = NULL;
			tmp[0] = NULL;
			//free(&tmp[cnt]);
			data = 1;
			break;
		case 6:
			tmp[cnt-1]->pNEXT = NULL;
			free(&tmp[cnt]);
			data = 1;
			break;
		default:
			*tmp[num-1]->pNEXT = *tmp[num+1];
			free(&tmp[num]);
			data = 1;
			break;
	}
	for (i = 0; i <= cnt; i++) {
		printf("%d:%p->%s\n", i, tmp[i], tmp[i]->name);
	}

	return data;
}


/* データ入力関数 */
int inputNameData(ST_TEST *pTest){
    char promptMessage[] = "名前 => ";
    char inputArray[100];
    int result = -1;

    while (result < 0) {
		result = getString(promptMessage, inputArray, 100);
    	printf("%d", result);
    	if (result >= 0) {
    		strcpy(pTest->name, inputArray);
    	}
    }
	
    return 0;
}


/* データ入力関数 */
int inputPointData(ST_TEST *pTest){
    char promptMessage[] = "点数 => ";
    char inputArray[100];
    int point = -1;

	while (point < 0) {
    	point = getNumber(promptMessage, 0, 100);
		printf("%d", point);
		if (point >= 0) {
			pTest->point = point;
		}
	}
	printf("\n");

    return 0;
}