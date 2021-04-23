void getItemName(int code, char *itemName);
int getItemUnitPrice(int code);

#ifndef ITEM_LISTS
#define ITEM_LISTS

struct ITEM_NAME_SIZE {
	int code;
	char name[32];
	int price;
};

#endif /* ITEM_LISTS */
