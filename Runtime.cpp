#include<iostream>
using namespace std;

class Base
{
  public :
   int A,B;                 //access specifier

   void fun()                //function definition
     { 
       cout<<"Base fun\n";
     }
   void gun(int i)          //function definition
     {
        cout<<"Base gun with one integer\n";
     }
   void gun(int i,int j)    //overloaded function definition
     {
       cout<<"Base gun with 2 integers\n";
     }
};

class Derived : public Base
{
    public:
       int X,Y;
      void sun()          //function definition
        {
           cout<<"Derived sun\n";
        }
      void fun()         //function redefinition
        {
            cout<<"Derived fun\n";
        }
 
};  

int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun();

  return 0;
}