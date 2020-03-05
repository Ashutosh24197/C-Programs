#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int grosssale[20];
    float grosspay[20],temp;
    int n,big=1200,end=1299,count;
    printf("Enter no of employee (max 20):\n");
    scanf("%d",&n);
    printf("Enter gross sale of %d employee :\n",n);
    for(int i=0;i<n;i++)
    {
            printf("Enter gross sale of %d : ",i+1);
        scanf("%d",&grosssale[i]);

         grosspay[i]=1000+grosssale[i]*.09;
    }
    for(int i=0;i<n;i++)
    {
       printf("The gross pay of %d employee is %f\n",i+1,grosspay[i]);
    }
    for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
            {
              if(grosspay[j]>=big&&grosspay[j]<=end)
              count++;
            }
            printf("IN range from %d to %d total no of employee = %d\n",big,end,count);

        big+=100;
        end+=100;
    }

}
