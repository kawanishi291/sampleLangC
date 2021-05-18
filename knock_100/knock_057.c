/*
まず受験者数を入力させ、次に受験者数ごとに英語、数学、国語の点数をスペースで区切って入力させる
（具体的な入力方法は下記のscanfの使い方の説明、および入力データの中身を見よ）。
入力が終了したら、英語、数学、国語の平均点、および各受験生の合計点を計算して表示するプログラムを作成せよ。
受験者数は100人までとする。なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、入力のためのメッセージは不要である
（実行例を参照すること）。
*/
# include <stdio.h>

struct STUDENT_DATA {
    int english;
    int math;
    int japanese;
};


int main(){
    int i;
    int num;
    struct STUDENT_DATA s_data[100];
    struct STUDENT_DATA *p = s_data;
    int eng;
    int math;
    int jp;
    
    printf("input people\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("input english math japanese:\n");
        scanf("%d %d %d", &p[i].english, &p[i].math, &p[i].japanese);
        //printf("%d %d %d", p[i].english, p[i].math, p[i].japanese);
    }
    for (i = 0; i < num; i++) {
        eng += p[i].english;
        math += p[i].math;
        jp += p[i].japanese;
    }
    printf("平均点 英語:%d, 数学:%d, 国語:%d\n", eng, math, jp);
    for (i = 0; i < num; i++) {
        printf("%d: %d\n", i, p[i].english + p[i].math + p[i].japanese);
    }
    

    return 0;
}

