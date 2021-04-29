#include <stdio.h>

int getPrice(int);

int main(void)
{
	int productCode; /* 商品コード */
	int price;		 /* 価格 */
	
	printf("商品コード => ");
	scanf("%d", &productCode);
	#if 0
		price = getPrice(productCode);
	#else
		price = 1200;
	#endif
	printf("商品コード：%d, 販売価格：%d\n", productCode, price);
	
	return 0;
}
