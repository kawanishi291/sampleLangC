#include <stdio.h>
#include <math.h>

typedef struct {
    int id;
    int eng;
    int jpn;
    int math;
    int total;
} STUDENT_SCORE;

int main (){
    int i, j;
    int sumE, sumJ, sumM, sumT;
    double aveE, aveJ, aveM, aveT;
    double varianceE, varianceJ, varianceM, varianceT;
    double stdDevE, stdDevJ, stdDevM, stdDevT;
    STUDENT_SCORE sScore[8] = {
        {1001, 85, 67, 59, 211},
        {1002, 77, 82, 45, 204},
        {1003, 58, 71, 72, 201},
        {1004, 88, 75, 55, 218},
        {1005, 92, 98, 76, 266},
        {1006, 66, 88, 81, 235},
        {1007, 65, 66, 60, 191},
        {1008, 98, 72, 47, 217}
    };

    sumE = 0;
    sumJ = 0;
    sumM = 0;
    sumT = 0;
    for(i = 0; i < 8; i++){
        sumE += sScore[i].eng;
        sumJ += sScore[i].jpn;
        sumM += sScore[i].math;
        sumT += sScore[i].total;
    }
    aveE = (double)sumE / 8;
    aveJ = (double)sumJ / 8;
    aveM = (double)sumM / 8;
    aveT = (double)sumT / 8;
    varianceE = 0;
    varianceJ = 0;
    varianceM = 0;
    varianceT = 0;
    for(i = 0; i < 8; i++){
        varianceE += (sScore[i].eng - aveE) * (sScore[i].eng - aveE);
        varianceJ += (sScore[i].jpn - aveJ) * (sScore[i].jpn - aveJ);
        varianceM += (sScore[i].math - aveM) * (sScore[i].math - aveM);
        varianceT += (sScore[i].total - aveT) * (sScore[i].total - aveT);
    }
    varianceE /= 8;
    varianceJ /= 8;
    varianceM /= 8;
    varianceT /= 8;
    stdDevE = sqrt(varianceE);
    stdDevJ = sqrt(varianceJ);
    stdDevM = sqrt(varianceM);
    stdDevT = sqrt(varianceT);
    for(i = 0; i < 8; i++){
        printf("学生番号[%d]  ", sScore[i].id);
        printf("(英語) %.1f  ", (sScore[i].eng - aveE) * 10 / stdDevE + 50);
        printf("(国語) %.1f  ", (sScore[i].jpn - aveJ) * 10 / stdDevJ + 50);
        printf("(数学) %.1f  ", (sScore[i].math - aveM) * 10 / stdDevM + 50);
        printf("(合計) %.1f  ", (sScore[i].total - aveT) * 10 / stdDevT + 50);
        printf("\n");
    }

    return 0;
}

