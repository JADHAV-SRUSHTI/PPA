#include<stdio.h>

int main()
{
   char ch ='A';
   int i =11;
   float f =3.14;
   double d =9.567;
   
   printf("Values from the variables are:\n");
   printf("%c\n",ch);
   printf("%d\n",i);
   printf("%f\n",f);
   printf("%lf\n",d);

   printf("Size of each variable\n");
   printf("Size of each character: %d\n",sizeof(ch));
   printf("Size of each integer: %d\n",sizeof(i));
   printf("Size of each float: %d\n",sizeof(f));
   printf("Size of each double: %d\n",sizeof(d));

   printf("Address of each variable\n");
   printf("Address of ch: %d\n",&ch);  
   printf("Address of i: %d\n",&i);
   printf("Address of f: %d\n",&f);
   printf("Address of d: %d\n",&d);

   return 0;
}

