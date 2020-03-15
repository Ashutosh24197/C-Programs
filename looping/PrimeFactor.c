#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,i,a,b;
    printf("\t\tThis is a program to find the all prime factor of a number.\n\n");

    printf("\tPlease enter a no:");
    scanf("%d",&num);
    printf("\tThe all prime factor of no are = 1");
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            b=j;
        }
        if(b==1)
         printf(",%d",i);
        }
    }
    printf("\n");
    printf(".........................Thank you.................................\n");
    return 0;
}
