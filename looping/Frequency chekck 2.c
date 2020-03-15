#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\t\tThis program accept binary no and convert it into its decimal,octal and hexadecimal equivalent.\n\n");
  int binary_no,rem,base=1,decimal=0,octal=0,temp,temp_octal=0,i=0;
  char hex[4];
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
      //Decimal to octal//
      temp=decimal;
      while(temp>0)
      {
          temp_octal= temp_octal*10+ temp%8;
          temp/=8;
      }
     while(temp_octal>0)
      {
          octal=octal*10+temp_octal%10;
          temp_octal/=10;
      }
      printf("The octal equivalent to the number is : %d\n",octal);
      //Decimal to Hexa decimal.//
      rem=0;
      while(decimal>0)
      {
        rem=decimal%16;
        switch(rem)
        {
            case 0:  rem=48; break;
            case 1:  rem=49; break;
            case 2:  rem=50; break;
            case 3:  rem=51; break;
            case 4:  rem=52; break;
            case 5:  rem=53; break;
            case 6:  rem=54; break;
            case 7:  rem=55; break;
            case 8:  rem=56; break;
            case 9:  rem=57; break;
            case 10: rem=65; break;
            case 11: rem=66; break;
            case 12: rem=67; break;
            case 13: rem=68; break;
            case 14: rem=69; break;
            case 15: rem=70; break;
        }
            hex[i]=rem;
            i++;
            decimal/=16;
      }
      i--;
      printf("Hexadecimal number equivalent =");
      for(i;i>=0;i--)
      printf("%c",hex[i]);
      printf("\n");
    printf("...................................................Thank you............................................................\n");
    return 0;

}
