#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *p=NULL;
   int *q=NULL;

   p=(int *)malloc(10*sizeof(int));

   //use memory
 
   p=(int *)realloc(p ,15*sizeof(int));
   if(q==NULL)
   {
     printf("Realloc fails");
     q=p;
   }

   //use memory

   free(q);
  

   return 0;
}