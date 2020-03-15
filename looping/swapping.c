#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    printf("Enter A number");
    scanf("%d%d",&x,&y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("First number after swapping %d\n",x);
    printf("Second number after swapping %d",y);
    return 0;
}
