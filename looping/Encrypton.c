#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis program accept a integer and encrypt it in to a other form described by company.\n\n");
  int no,a,b,c,d,tem;
  do
  {
  printf("Enter the encrypted 4 digit integer: ");
  scanf("%d",&no);
  d=no%10;
  no=no/10;
  c=no%10;
  no=no/10;
  b=no%10;
  a=no/10;
  if(a<10&&a>0)
  {

  if(d<7)
    d=d+3;
    else
        d=d-7;
  if(a<7)
    a=a+3;
    else
        a=a-7;
  if(b<7)
    b=b+3;
    else
        b=b-7;
  if(c<7)
        c=c+3;
    else
        c=c-7;


  tem=a;
  a=c;
  c=tem;
  tem=b;
  b=d;
  d=tem;
  printf("The decrypt no is :%d%d%d%d\n",a,b,c,d);
  }
  else
    printf("Error\n");

    printf("...................................................Thank you............................................................\n");
     }
  while(no>0);
    return 0;

}
