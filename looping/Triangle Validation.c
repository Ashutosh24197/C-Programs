#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("\t\tThis is a program to check that the triangle is valid or not if sides are given.\n\n");
   int a,b,c;
   printf("Please enter the sides of the triangle: ");
   scanf("%d%d%d",&a,&b,&c);
   if(a==0||b==0||c==0)
    printf("Error, The side of triangle is not zero.\n");
   else if(a<0||b<0||c<0)
    printf("Error,th side of triangle is not negative.\n");
   else if(a+b>c)
    printf("Triangle is valid\n");
   else if(b+c>a)
    printf("Triangle is valid\n");
   else if(a+c>b)
   printf("Triangle is valid\n");
   else
    printf("Triangle is not valid\n");

    printf(".....................................................Thank you.................................................................\n");
    return 0;
}
