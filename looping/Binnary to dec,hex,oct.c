#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis program accept binary no and convert it into its decimal,octal and hexadecimal equivalent.\n\n");
  int binary_no,rem,base=1,decimal=0,octal=0,no,a,b,c;
  char A,B,C;
  printf("Enter the binary number : ");
  scanf("%d",&binary_no);
  while(binary_no>0)
  {
    rem=binary_no%10;
    if((rem == 0)||(rem == 1))
     {
       decimal+=rem*base;
       base=base*2;
       binary_no=binary_no/10;
     }
    else
    {
        printf("Invalid binary number please  try again");
        return 0;
    }
  }
       printf("The decimal equivalent to the number is : %d\n",decimal);
       printf("The hexadecimal equivalent to the given number is :%X\n",decimal);
       printf("The octal equivalent to the number is : %o\n",decimal);




    printf("...................................................Thank you............................................................\n");
    return 0;

}
