#include<stdio.h>


struct Demo
{
  int i;
  float f;
  char ch;
  float d;
  
  
   
};

int main()

{
  struct Demo dobj;

  
  printf("Size of structure is :%d\n",sizeof(dobj));
 
  return 0;
}