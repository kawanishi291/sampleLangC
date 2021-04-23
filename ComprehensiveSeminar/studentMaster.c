#include <stdio.h>
#include <string.h>
#include "studentMaster.h"

/* 学生マスタ(構造体配列) */
static M_STUDENT mStudent[NUM_STUDENT] = {
	{101,	"yamada"},
	{102,	"tanaka"},
	{103,	"suzuki"},
	{104,	"sato"},
	{105,	"kobayashi"},
	{106,	"nakamura"},
	{107,	"hashimoto"},
	{108,	"inoue"},
	{109,	"ito"},
	{110,	"kinoshita"}
};

extern char studentName[32];


void getStudentName(int studentCode, char *studentName)
{
	int i;
	
	for (i = 0; i < NUM_STUDENT; i++) {
		if (studentCode == mStudent[i].studentCode) {
			strcpy(studentName, mStudent[i].studentName);
		}
	}
}
