#include <stdio.h>
#include <stdlib.h>
int prime (int);
 main()
{
int check;
printf("Prime no from 1 to 1000.\n1");
for(int i=2;i<1000;i++)
{
   check=prime(i) ;
   if(check==1)
    printf(",%d",i);
}
}
 int prime  (int no)
{
    int div;
 for(int i=1;i<no;i++)
    if(no%i==0)
    div=i;
 if(div==1)
    return (1);
 else
    return (0);
}
