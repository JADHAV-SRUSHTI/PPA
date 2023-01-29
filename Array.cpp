#include<iostream>
using namespace std;

class Array()
{
    public :
        int iSize;
        int *Arr;

    Array(int iLength = 10)
      {

        iSize =iLength;
        Arr =new int[iSize];
     }
    ~Array
     {

        delete []Arr ;
        
     }
    void Accept()
     {
         cout<<"Enter the values\n";
         int i=0;

        for(i=0;i<iSize;i++)
         {
              cin>.Arr[i];  
      }
    void Display()
      {
  
         cout<<"Elements of array are :"
};
int main()
{
   
      Array obj1(4);
      Array obj2(6);

      return 0;
}