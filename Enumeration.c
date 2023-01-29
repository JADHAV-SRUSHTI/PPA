#include<stdio.h>

enum days{ Monday ,Tuesday ,Wednesday,Thursday};

int main()

{
  enum days obj;
  printf("Size of enum :%d\n",sizeof(obj));
  printf("Monday:%d\n",Monday);
  printf("Tuesday:%d\n",Tuesday);
  printf("Wednesday:%d\n",Wednesday);
  printf("Thursay:%d\n",Thursday);
   
  return 0;
}