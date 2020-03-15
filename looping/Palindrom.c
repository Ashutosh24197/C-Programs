#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("\t\tThis is a program to check that the given number is palindrome or not.\n\n");
   int pal=0,no,a;
   printf("Please enter the no:");
   scanf("%d",&no);
   a=no;
   while(no)
   {
       pal=pal*10 + (no%10);
       no/=10;

   }
   if(pal==a)
   printf("Number is palindrome\n\n");
   else
   printf("Number is not palindrome\n\n");
   printf(".....................................................Thank you...............................................................\n");
    return 0;
}
