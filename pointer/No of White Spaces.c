#include <stdio.h>
#include <malloc.h>
#include <string.h>
void no_of_white_space(char *a,int n);
void main()
{
    char a[100];
    gets(a);
    int n;
    for(n=0;a[n];n++);
    no_of_white_space(a,n);
}
void no_of_white_space(char *a,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==' ')
            count++;
    }
    printf("The white space in string is %d times. ",count);
}
