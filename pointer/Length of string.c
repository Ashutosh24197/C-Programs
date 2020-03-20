#include <stdio.h>
#include <malloc.h>
#include <string.h>
void length (char*);
int  main()
{
    char a[100]={'\0'};
    scanf("%s",&a);
    length(a);
    return 0;
}
void length(char *a)
{
    static int i=0;
   if(*a)
   {
        i++;
      length(a+1);
   }
   else
    printf("length is %d",i);

}
