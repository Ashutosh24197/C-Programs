#include <stdio.h>
#include <stdlib.h>
int fibonacci (int);
 main()
{
  int n;
 printf("Enter the term number: ");
 scanf("%d",&n);
 printf("The %d term of Fibonacci series is %d",n,fibonacci(n));

}

 int fibonacci (int no)
{
   if(no<=1)
    return(no);
   else
    return(fibonacci(no-1)+fibonacci(no-2));
}
