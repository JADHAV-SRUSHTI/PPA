#include<stdio.h>


struct Demo
{
  int i;
  float f;
  char ch;
  float d;   
};

union Hello
{
  int i;
  float f;
  char ch;
  float d;   
};


int main()

{
  struct Demo dobj;
  union Hello hobj;

  
  printf("Size of structure is :%d\n",sizeof(dobj));
  printf("Size of union is :%d\n",sizeof(hobj));

  dobj.i=11;
  dobj.f=90;
  dobj.d=90.5;
 
  hobj.d=90.4;
  prinft("%f\n",hobj.f);
  printf("%f\n",hobj.d);

  return 0;
}