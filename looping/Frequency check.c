#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis is a program that reads an integer m and a single digit say n ad determines how many digits in integer m are n(s).\n\n");
  int n,rem,i=0,m;

  printf("Enter the integer m: ");
  scanf("%d",&m);
  printf("Enter a single integer n: ");
  scanf("%d",&n);
  while(m>0)
  {
      rem=m%10;
      if(rem==n)
      {
        i=i+1;
      }

      m=m/10;
  }
  printf("There are %d digits of n in m.\n",i);


    printf("...................................................Thank you............................................................\n");
    return 0;

}
