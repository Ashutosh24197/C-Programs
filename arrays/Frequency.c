#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
   int array[100],n,temp,count,k=0;
   printf("Enter number of value you want to store in array.");
   scanf("%d",&n);
   printf("Enter %d values : \n",n);
   for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(int i=0;i<n;i++)
        {
             count=0;
               for(int j=0;j<(n-1);j++)
               {
                    if(array[j]>array[j+1])
                        {
                              temp=array[j];
                              array[j]=array[j+1];
                              array[j+1]=temp;
                              count++;
                         }
               }
               if(count==0) {break;}
        }
        printf("The shorted array is : ");
        for(int i=0;i<n;i++)
        printf("%d\t",array[i]);
        printf("\n\n\n");
        while(k<n)
        {
            count=1;
            while(array[k]==array[k+1])
            {
                count++;
                k++;
            }
            printf("\t\t\tThe frequency of number %d is %d\n",array[k],count);
            k++;
        }
}
