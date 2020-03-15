#include <stdio.h>
#include <stdlib.h>
int reverse (int);
 main()
{
    int number,rev;
    printf("Enter the number: ");
    scanf("%d",&number);
    rev=reverse(number);
    printf("The reversed number is %d.",rev);
}
 int reverse  (int no)
{
    int rev=0;
     while(no>0)
     {
         rev= rev*10 + no%10;
         no/=10;
     }
     return (rev);
}
