#include<stdio.h>

//typedef JUNA_NAW     NAWIN_NAW

typedef int INTEGER;

typedef unsighned long int ULONG;

struct Demo
{
     int a;
     int b;
};

typedef struct demo DEMO;
typedef struct demo *PDEMO;


int main()
{
     INTEGER i =10;    //int i =10;
    ULONG j =21;       //unsigned long int j =21;
    DEMO obj;           //struct Demo obj;
    PDEMO pter =&obj;

     return 0;
} 