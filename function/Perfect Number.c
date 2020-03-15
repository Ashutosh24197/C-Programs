#include <stdio.h>
#include <stdlib.h>
int perfect (int);
 main()
{
int number,check;
printf("Enter the number :");
scanf("%d",&number);
check=perfect(number);
if(check==1)
    printf("Number is perfect");
else
    printf("Number is not perfect");
}
 int perfect  (int no)
{
 int sum=0;
for(int i=1;i<(no/2);i++)
    if(no%i==0)
    sum+=i;
if(sum==no)
    return (1);
else
    return (0);
}
