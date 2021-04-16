#include <stdio.h>

struct S_SCORE {
    int id;
    int english;
    int Japanese;
    int math;
};

void setScore(struct S_SCORE *);

int main(void) {
    int i;
    struct S_SCORE score[3];
    struct S_SCORE *p = score;

    setScore(p);
    printf("+-----------+------+------+------+------+\n");
    printf("|　学生番号　 | 英語　| 国語　| 数学　| 合計　|\n");
    printf("+-----------+------+------+------+------+\n");
    for(i = 0; i < 3; i++){
        printf("|　 　%d  　 |  %d  |  %d  |  %d  |  %d  |\n", p[i].id, p[i].english, p[i].Japanese, p[i].math, p[i].english + p[i].Japanese + p[i].math);
    }
    printf("+-----------+------+------+------+------+\n");
    
    return 0;

}

void setScore(struct S_SCORE *p){
    int i;

    for(i = 0; i < 3; i++){
        printf("学生番号 => \n");
        scanf("%d", &p[i].id);
        printf("英語 => \n");
        scanf("%d", &p[i].english);
        printf("国語 => \n");
        scanf("%d", &p[i].Japanese);
        printf("数学 => \n");
        scanf("%d", &p[i].math);
    }
}