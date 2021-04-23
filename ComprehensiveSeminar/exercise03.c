#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "itemMaster.h"

struct ITEM_NAME_SIZE itemList[9] = {
	{201, "apple", 1200},
	{202, "orange", 800},
	{203, "strawberry", 500},
	{204, "mango", 850},
	{205, "pineapple", 1250},
	{1001, "onion", 540},
	{1002, "radish", 390},
	{1003, "carrot", 220},
	{1004, "potato", 400}
};
struct ITEM_NAME_SIZE *p = itemList;

char itemNameList[32];

void printOrderList(char *bufRec);

int main(void){
	FILE *fp;
	char str[200];
	int i;
	
	fp = fopen("orderList.txt", "r");
	if (fp == NULL) {
		printf("file open failed!\n");
		exit(1);
	}
	while (fgets(str, 200, fp) != NULL) {
		printOrderList(str);
	}
	fclose(fp);
	
    return 0;
}

void printOrderList(char *bufRec){
	int i;
	int code;
	int price;
	int flag = 0;
	int sum = 0;
	
	code = atoi(bufRec);
	getItemName(code, &itemNameList[0]);
	price = getItemUnitPrice(code);
	for (i = 0; bufRec[i] != '\n'; i++) {
		if (bufRec[i]== ',') {
			flag = 1;
		} else if (flag == 1) {
			sum *= 10;
			sum += (int)bufRec[i] - ('0' - 0);
		}
	}
	printf("%s\t数量:%2d個 単価:%4d 金額:%5d円\n", &itemNameList[0], sum, price, sum * price);
}
