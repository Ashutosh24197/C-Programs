#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("\t\tThis is a program to print the table of number from 1 to 10.\n\n");
   for(int i=1;i<=10;i++)
   {

      for(int j=1;j<=10;j++)

        printf("%10d",i*j);
        printf("\n\n");

   }
    printf(".....................................................Thank you.................................................................\n");
    return 0;
}
