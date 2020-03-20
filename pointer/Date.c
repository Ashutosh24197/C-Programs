#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main()
{
    char month[3][12]={"Jan","Feb","Mar","Apr","May","jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
   if(d<0||m<0||y<0||m>12)
   {
       printf("Invalid date.");
    return 0;
   }
   if(m==2&&y%4==0&&d>29)
    {
       printf("Invalid date.");
    return 0;
   }
   if(m==2&&y%4!=0&&d>28)
    {
       printf("Invalid date.");
    return 0;
   }
   if(m==1||m==3||m==5||m==7||m==8||m==10||m==12&&d>31)
 {
       printf("Invalid date.");
    return 0;
   }
   if(m==4||m==6||m==9||m==11&&d>30)
     {
       printf("Invalid date.");
    return 0;
   }
        printf("%d/%s/%d",d,month+(m-1),y);
}
