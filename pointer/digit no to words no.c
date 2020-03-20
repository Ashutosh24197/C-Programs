#include <stdio.h>
#include <malloc.h>
#include <string.h>
void dig1(void);
void dig2(void);
void dig3(void);
char digit[5][9]={"one","two","three","four","five","six","seven","eight","nine"};
char longdig[9][9]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char digit10s[7][9]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int number[10],i=0;
int main()
{
   int no;
   scanf("%d",&no);
   if(no==0)
    {
    printf("Zero");
    return 0;
   }
   while(no>0)
   {
      number[i]=no%10;
      no/=10;
      i++;
   }
  if(i==1)
        dig1();
  else if(i==2)
        dig2();
  else if(i==3)
    dig3();
    else
        dig4();
        return 0;
}
void dig1(void)
{
    printf("%s",digit+(number[0]-1));
}
void dig2(void)
{
      if(number[0]==0)
        printf("%s",digit10s+(number[1]-1));
      else if(number[1]==1)
        printf("%s",longdig+(number[0]-1));
      else
        printf("%s %s",digit10s+(number[1]-1),digit+(number[0]-1));
  }
  void dig3(void)
  {
      printf("%s hundred ",digit+(number[2]-1));
      if(number[1]!=0)
        dig2();
      else if(number[0]!=0)
        dig1();
  }
  void dig4(void)
  {
      printf("%s thousand ",digit+(number[3]-1));
      if(number[2]!=0)
        dig3();
      else if(number[1]!=0)
        dig2();
      else if(number[0]!=0)
        dig1();
  }

