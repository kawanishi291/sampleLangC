#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	/* コマンドライン引数 */
	FILE *fp;
	char str[200];
	int i;
	
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
            if (i == 0) {
                printf("社員番号：%c", str[i]);
            } else if (str[i] == ',') {
                printf(", 基本給：");
            } else if (str[i] == '\n') {
                printf("円\n");
            } else {
                printf("%c", str[i]);
            }
        }
    }
    fclose(fp);

    return 0;
}
