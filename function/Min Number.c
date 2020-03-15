#include <stdio.h>
#include <stdlib.h>
int small(int,int,int);
 main()
{

  int min,a,b,c;
  printf("Enter the 3 no: ");
  scanf("%d%d%d",&a,&b,&c);
 min=small(a,b,c);
 printf("Minimum no is :%d",min);
}
 int small (int a,int b,int c)
{
int small;
  if(a<b&&a<c)
  small=a;
     else if(b<a&&b<c)
        small=b;
        else
            small=c;
   return (small);
}
