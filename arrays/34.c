
#include <stdlib.h>
#include <math.h>
void main()
{
   int array[100],n,temp,min;
   printf("Enter number of value you want to store in array.");
   scanf("%d",&n);
   printf("Enter %d values : \n",n);
   for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(int i=0;i<(n-1);i++)
        {
             min=i;
        for(int j=i+1;j<n;j++)
          {
              if(array[j]<array[min])
                min=j;
          }
       temp=array[i];
       array[i]=array[min];
       array[min]=temp;
        }
        printf("The shorted array is : ");
        for(int i=0;i<n;i++)
        printf("%d\t",array[i]);
}
