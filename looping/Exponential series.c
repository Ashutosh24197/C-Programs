#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis is a program to compute The Exponential series.\n\n");
   int n;
   float x,sum=1,t=1;
   printf("Please enter the value of x:\n");
   scanf("%f",&x);
   printf("Please enter the no of terms :\n");
   scanf("%d",&n);

   for(int i=1;i<n;i++)
   {
       t=t*x/i;
       sum+=t;
   }

   printf("The exponential value is=%f",sum);
   printf("\n");
    printf(".....................................................Thank you.................................................................\n");
    return 0;

}
