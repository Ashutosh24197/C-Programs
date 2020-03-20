#include <stdio.h>
#include <string.h>
void compair(char* ,char*);
int  main()
{
    char a[100],b[100];
    int l1,l2;
    gets(a);
    gets(b);
     l1=strlen(a);
    l2=strlen(b);
    if(l1==l2)
    compair(a,b);
    else printf("String are not equal.");
    return 0;
}
void compair(char *a,char *b)
{
   for(int i=0;*(a+i)!='\0';i++)
   {
       if(*(a+i)!=*(b+i))
       {
           printf("String are not equal.");
       }
   }
   printf("String are equal.");
}
