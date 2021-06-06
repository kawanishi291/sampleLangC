#include <stdio.h>

#define DATALEN 15

void setList(int id, int great, int good , int bad, char *p);
void InputNumber(char *p, int index, int num);

int main(){
    char list[DATALEN];
    char *p = list;
    int id = 1;
    int great = 5;
    int good = 30;
    int bad = 100;
    int i;

    setList(id, great, good , bad, p);
    for (i = 0; i < DATALEN; i++) {
        printf("%c", list[i]);
    }

    return 0;
}

void setList(int id, int great, int good , int bad, char *p)
{

    InputNumber(p, 0, id);
    InputNumber(p, 4, great);
    InputNumber(p, 8, good);
    InputNumber(p, 12, bad);

}

void InputNumber(char *p, int index, int num)
{
    int str;

    str = '1' - 1;
    if (num < 10) {
        p[index] = '0';
        p[index+1] = '0';
        p[index+2] = (char)num + str;
        p[index+3] = ',';
    } else if (num < 100) {
        p[index] = '0';
        p[index+1] = (char)(num / 10 + str);
        p[index+2] = (char)(num % 10 + str);
        p[index+3] = ',';
    } else {
        p[index] = (char)(num / 100 + str);
        p[index+1] = (char)((num % 100) / 10 + str);
        p[index+2] = (char)(num % 10 + str);
    }
}