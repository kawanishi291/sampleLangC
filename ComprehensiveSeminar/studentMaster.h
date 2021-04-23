void getStudentName(int studentCode, char *studentName);

#ifndef STUDENT_NAME_LEN
#define STUDENT_NAME_LEN (9) /* 名前の長さ */
#define NUM_STUDENT (10) /* 学生の数 */

/* 学生マスタ構造体 */
typedef struct {
	int studentCode;
	char studentName[STUDENT_NAME_LEN + 1]; /* 名前 */
} M_STUDENT;
#endif

