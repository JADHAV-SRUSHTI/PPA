/*
   Steps
   Step 1:Understand the problem statement
   Step 2:Write the algorithm
   Step 3:Decide the programming language
   Step 4:Write the program
   Step 5:Test the program
*/


//Accept N numbers from user and perforn the addtion

//Value of N=5
//Value :10 20 30 40 50

//Output
//Additiom is:150

//Algorithm
/*
    START
       Accept the number of elements from user
       Allocate the memory to store that numbers
       Accept the numbers from user
       Perform addition of all numbers
       Display the addition
    END
*/


#include<stdio.h>       //for printf and scanf
#include<stdlib.h>      //for malloc and free
 
////////////////////////////////////////////////////////
//
//  Application Name:Addition of N numbers
//  Input : N numbers
//  Output: Addition
//  Author: Piyush Khairnar
//  Date : 18 September 2022
//
///////////////////////////////////////////////////////

int main()
{
   int *Arr=NULLL;   //Pointer to hold address of array
   int iSize=0;      //Variable to hold size of array
   int i=0;          //Loop counter
   int iSum=0;       //To hold the addition

   printf("Please enter hoe many elements you want?\n");
   scanf("%d",&iSize);
 
   //Allocate the memory
   Arr=(int *)malloc(iSize *sizeof(int));
   printf("Memory allocation is sucessful");

   printf("Please enter the elements\n");
  
   for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
     }
    for((i=0;i<iSize;i++)
     {
        iSum=iSum+Arr[i];
     }
    
   printf("Addition is:%d\n",iSize);

   free(Arr);
   printf("Memory dellocated");


  return 0;
}
