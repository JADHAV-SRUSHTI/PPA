#include<iostream>
using namespace std;

//call by value
void fun(int no)
{
}

//call by address
void gun()
{
}

//call by reference
void sun()
{
}

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

   fun(i);
   gun(&j);
   sun(k);
       

    return 0;
}