#include<stdio.h>
int main()
{
    char old[]="ashu.txt";
    char nev[]="ashutosh.txt";
    int value;
    value=rename(old,nev);
    if(!value)
        printf("Rename is successfully done.");
    else
        printf("error");
    return 0;
}
