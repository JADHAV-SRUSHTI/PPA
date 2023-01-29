#include<stdio.h>
using namespace std;  

class Base
{
   public:
      int A,B;
     
      Base()
       {
          cout<<"Inside base constructor\n";
       }
      ~Base()
       { 
         cout<<"Inside base destructor\n"; 
       }
      void Fun()
       {
         cout<<"Inside base fun\n";
       }

};

class Derived:public Base
{
    public:
      int X,Y;
 
      Derived()
        {
          cout<<"Inside derived constructor\n";
        }
      ~Derived()
        {
          cout<<"Inside derived destructor\n";
        }
       void gun
        {
          cout<<"Inside gun of derived\n";
        }
};

int main()
{
   Derived * ptr=NULL;
   
   ptr=new Derived;

   ptr->Fun();
   ptr->gun();
   

   delete ptr;

  return 0;
}