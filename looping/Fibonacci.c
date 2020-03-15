#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("\t\tThis is a program to compute first N numbers of Fibonacci series..\n\n");
   int n,first=1,second=1,sum=0;
   printf("Please enter the no of which you have to compute the Fibonacci series:");
   scanf("%d",&n);
   if(n>0)
   {

         printf("The Fibonacci series is:%d,%d",first,second);
             for(int i=2;i<n;i++)
                {

                  sum=first+second;
                  first=second;
                  second=sum;
                  printf(",%d",second);
                }
   }
   else
   printf("Error");
   printf("\n");
    printf(".....................................................Thank you.................................................................\n");
    return 0;
}
