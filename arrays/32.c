#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
   int array[100],n,no,index;
   printf("Enter number of value you want to store in array.");
   scanf("%d",&n);
   printf("Enter %d values : \n",n);
   for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
   printf("Enter a number to check that it is in the array or not :");
   scanf("%d",&no);
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        if(array[j]>array[k])
        {
           array[j]=array[j]-array[k];
           array[k]=array[j]+array[k];
           array[j]=array[k]-array[j];
        }
    }
    printf("The shorted array is: ");
    for(int i=0;i<n;i++)
        printf("%d\t",array[i]);
    printf("\n");
    index=binarry_search(array,no,n);
    if(index==-1)
        printf("SORRY no is not present in array.");
    else
        printf("Number is present in array in %d position",index+1);

}
int binarry_search (int array[],int no,int n)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(array[mid]==no)  return mid;
        else if(array[mid]<no) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
