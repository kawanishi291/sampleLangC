void addDayDuty(int day, int studentCode);
void printDayDuty(void);

#ifndef BUFFER_SIZE
#define BUFFER_SIZE (5) /* 循環バッファサイズ */

/* 当月日直データ構造体 */
typedef struct {
	int day;
	int studentCode;
} NICHOKU_BUFFER;
#endif

