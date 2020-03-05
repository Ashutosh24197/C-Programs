#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int maximum(int array[],int n,int max);
void main()
{
   int array[100],n,max;
   printf("Enter number of value you want to store in array.");
   scanf("%d",&n);
   printf("Enter %d values : \n",n);
   for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    max=array[0];
   max=maximum(array,n,max);
   printf("The maximum is %d",max);
}
int maximum(int array[],int n,int max)
{
   static int c=0;
   if(c==n)
    return max;
   if(array[c+1]>max)
        max=array[c+1];
        c++;
   maximum(array,n,max);

}
