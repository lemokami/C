#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct subject{
    char subName1[30];
    int mark;
};

struct stud{
    char name[50];
    int snum;
    struct subject sub[snum];
    float avgmark;
    char grade[8];

};

struct class{
    int cnum;
    char div;
    struct stud student;
};


struct school{
    char name[50];
    int id;
    int cn;
    struct class cClass[cn];
};
