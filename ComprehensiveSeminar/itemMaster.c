#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "itemMaster.h"

extern struct ITEM_NAME_SIZE *p;
extern char itemNameList[32];


void getItemName(int code, char *itemName)
{
	int i;
	int flag = 0;
	
	for (i = 0; i < 9; i ++) {
		if (p[i].code == code) {
			strcpy(itemName, p[i].name);
			flag = 1;
		}
	}
	if (flag == 0) {
		strcpy(itemName, "NULL");
	}
}


int getItemUnitPrice(int code)
{
	int i;
	
	for (i = 0; i < 9; i ++) {
		if (p[i].code == code) {
			return p[i].price;
		}
	}
	
	return 0;
}
