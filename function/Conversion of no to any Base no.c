#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int convert1(int *,int);
int convert2(int ,int);
int main()
{
    int base1,base2,no,temp[10],decimal,con_no;
    printf("PLEASE,enter base of no,which you want to enter(not grater than 10):");
    scanf("%d",&base1);
    if(base1<0||base1>10)//check of base1.//
        {
        printf("Error.");
        return 0;
        }
    printf("Enter number: ");
    scanf("%d",&no);
    for(int i=0;i<10;i++)//store no in an array.//
    {
        if(no>0)
        {
           temp[i]=no%10;
           no/=10;
        }
        else
        {
           temp[i]=10;
           break;
        }

    }

    for(int i=0;temp[i]!=10;i++)//check that given no is valid in given base or not.//
    {
        if(temp[i]>=base1)
        {
           printf("Error.");
        return 0;
        }
    }
    printf("Enter the base to convert given no:");
    scanf("%d",&base2);
     if(base2<0||base2>10)//check of base2.//
        {
        printf("Error.");
        return 0;
        }
    decimal=convert1(temp,base1);
    con_no=convert2(decimal,base2);
    printf("The converted no is : %d",con_no);
    return 0;
}
//function//
//conversion given no to decimal no//
int convert1(int temp[],int base1)
{

   static int decimal=0,i=0,t=1;
   if(temp[i]!=10)
    {
    decimal+=temp[i]*t;
    i++;
    t*=base1;
    convert1(temp,base1);
   }
   else return(decimal);
}
// conversion decimal to given base//
int convert2(int decimal,int base2)
{
    static tem_no=0,con_no=0;
    if(decimal>0)
    {
        tem_no=tem_no*10+decimal%base2;
        convert2(decimal/base2,base2);
    }
    while(tem_no>0)
    {
        con_no=con_no*10+tem_no%10;
        tem_no/=10;
    }
    return(con_no);
}
