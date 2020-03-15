#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis program determines the winner of sales contest.\n\n");
  int a,c,no,b=1;
  char name,name2;
  printf("Please enter the employees no : ");
  scanf("%d",&no);

  printf("\nEnter name of employee number 1. ");
  scanf("%c",&name);
  printf("and sale unit. ");
  scanf("%d",&c);

  for(int i=2;i<=no;i++)
  {
      printf("\nEnter name of employee number %d: ",i);
      scanf("%c",&name2);
      printf("and sale unit. ");
      scanf("%d",&a);
      if(c<a)
      {
        c=a;
        b=i;
        name=name2;
      }

  }
    printf("\t\tThe winner employee is %c and his sale unit is %d\n",name,c);
    printf("...................................................Thank you............................................................\n");
    return 0;

}
