#include <stdio.h>
#include <malloc.h>
#include <string.h>
void frequency(char *a,int n);
void main()
{
    char a[100];
    scanf("%s",&a);
    int n;
    for(n=0;a[n];n++);
    frequency(a,n);
}
void frequency(char *a,int n)
{
    char b;
    int count;
    for(int i=0;i<n;i++)
    {
        if(a[i]!='\0')
        {
            b=a[i];
            count=1;
            for(int j=i+1;j<n;j++)
            {
                if(b==a[j])
                {
                  count++;
                   a[j]='\0';
                }
            }
            printf("The character %c is presented in %d time.\n",b,count);
        }
    }
}
