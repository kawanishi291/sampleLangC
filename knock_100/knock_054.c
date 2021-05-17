/*
まずデータの個数を入力させ、次にデータの個数だけ整数値を入力させる。
この入力データの中で最大値と最小値を求め表示するプログラムを作成せよ。
データの個数は100個までとする。なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、
入力のためのメッセージは不要である（実行例を参照すること）。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	/* コマンドライン引数 */
	FILE *fp;
	char str[200];
	int i;
    int max = 0;
    int small = 10000;
	
	/*
	for (i = 0; i < argc; i++) {
		printf("argv[%d] => %s\n", i, argv[i]);
	}
	*/
	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		if (argc == 1) {
			printf("コマンドライン引数エラー：入力ファイル名を指定してください\n", argv[1]);
			exit(1);
		} else {
			printf("ファイルのオープンに失敗しました（%s）\n", argv[1]);
			exit(1);
		}
	}
	while (fgets(str, 200, fp) != NULL) {
        for (i = 0; i < strlen(str); i++) {
            if (str[i] < small) {
                small = str[i];
            }
            if (max < str[i]) {
                max = str[i];
            }
            printf("%d\n", str[i]);
        }
    }
    fclose(fp);
    printf("最小値 = %d, 最大値 = %d\n", small, max);

    return 0;
}

