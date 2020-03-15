#include <stdio.h>
#include <stdlib.h>
int factorial (int);
int parmutation(int,int);
 main()
{
  int n,r,value;
  printf("Enter the value of n:");
  scanf("%d",&n);
  printf("Enter the value of r:");
  scanf("%d",&r);
  if(n>=r&&n>=0)
  {
   value=parmutation(n,r);
   printf("The value of C(n,r)=%d\n",value);
  }
  else
    printf("Error,Pleas input valid number's.\n");
    printf("\t\t\tThe pascal series.\n");
    for(int i=0;i<=10;i++)
    {
        printf("FOR n=%d  :1",i);
        for(int j=1;j<=i;j++)
        printf(",%4d",parmutation(i,j));
    printf(".\n");
    }

}
int parmutation(int n,int r)
{
    int value;
     value=factorial(n)/(factorial(r)*factorial(n-r));
     return(value);
}

 int factorial (int no)
{
   int fact=1;
   if(no>0)
   fact=no*factorial(no-1);
   return(fact);

}
