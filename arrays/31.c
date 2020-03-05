#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
   int array[100],n,no,temp=0;
   printf("Enter number of value you want to store in array.");
   scanf("%d",&n);
   printf("Enter %d values : \n",n);
   for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
   printf("Enter a number to check that it is in the array or not :");
   scanf("%d",&no);
   for(int i=0;i<n;i++)
   if(no==array[i]){
    printf("Yes, number is present in array at the place %d\n",i+1);
     temp++;}
     if(temp==0)
        printf("SORRY this number is not present in this array.");
}
