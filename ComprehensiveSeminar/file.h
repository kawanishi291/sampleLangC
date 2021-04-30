#ifndef ITEMS
#define ITEMS
#define NAME_LEN (20 + 2) /* 名前 20+\n+\0 */

/* テスト点数管理構造体 */
typedef struct Item Item;
struct Item {
    int code;           /* コード */
    char name[NAME_LEN];/* 名前 */
    int SellingPrice;   /* 売値 */
    int Purchase price; /* 仕入れ値 */
	Item *pNEXT;		/* 次へのポインタ */
};

#endif