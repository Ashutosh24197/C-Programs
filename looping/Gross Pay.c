#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis program shows the gross pay of the employees of the company.\n\n");
   int hour,a;
   float rate,salary;
   printf("\tThe company pays gross pay of employee according to the working time of employee.\n\tSo please enter the working time of employee in hour:");
   scanf("%d",&hour);
   printf("\tPlease enter the rate for the gross pay: ");
   scanf("%f",&rate);
   if(hour<=40)
   {
       salary=rate*hour;
       printf("\tThe gross salary of employee is %.2f\n",salary);
   }
   else
   {
       a=hour-40;
       salary=hour*rate+a*rate/2;
       printf("\tThe gross salary of employee is %.2f\n",salary);
   }
    printf(".....................................................Thank you.................................................................\n");
    return 0;

}
