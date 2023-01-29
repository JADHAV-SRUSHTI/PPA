#include<stdio.h>

//function defination
 void Fun()
{
  printf("Inside fun\n");

}
  int main()
{

  Fun();   //function call

  void (*fptr)();

  fptr =Fun;
 
  fpter();

  return 0;
}