#include<stdio.h>
int main()
{
    FILE *source,*target;
    source=fopen("ashutosh.txt","r");
    if(source==NULL)
        printf("Error");
    char temp;
target=fopen("file2.txt","w");
    if(target==NULL)
        printf("Error");
    while(!feof(source))
    {
        temp=fgetc(source);
        fputc(temp,target);
    }

    fclose(source);
    fclose(target);
    return 0;
}
