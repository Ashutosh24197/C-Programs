#include <stdio.h>
#include <stdlib.h>
int GCD (int,int);
 main()
{
  int n1,n2,gcd;
 printf("Enter two number: ");
 scanf("%d%d",&n1,&n2);
 if(n1>0&&n2>0)
 {
   gcd=GCD(n1,n2);
   printf("The GCD of two number is %d",gcd);
 }
  else
    printf("ERROR,pleas enter valid value.");
}
 int GCD (int n1,int n2)
{
  if(n2==0)
    return n1;
  else
   return GCD(n2,n1%n2);
}
