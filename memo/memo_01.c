#include <stdio.h> 
#include <stdlib.h>

int main() {
    FILE *outputfile;   // 出力ストリーム
    
    outputfile = fopen("memo.txt", "w");   // ファイルを書き込み用にオープン(開く)
    if (outputfile == NULL) {           // オープンに失敗した場合
      printf("cannot open\n");          // エラーメッセージを出して
      exit(1);                          // 異常終了
    }
    
    fprintf(outputfile, "Memo\n");    // ファイルに書く

    fclose(outputfile);     // ファイルをクローズ(閉じる)
    return 0;
}