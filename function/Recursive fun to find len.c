#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int array_length (char*,int);
void  main()
{
    char array[100];
    printf("Enter a char type array : ");
    gets(array);
    int l=0;
    l=array_length(array,l);
    printf("Length of array is %d",l);
}
 int array_length (char array[],int l)
{
   if(array[l]=='\0')
    return (l);
   else
    array_length(array,l+1);
}
