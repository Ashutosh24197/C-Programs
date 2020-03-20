#include <stdio.h>
#include <dos.h>
#include "windows.h"
#include <conio.h>
struct date{
int day,mon,year;
};
int main()
{
   struct date dt;
   getdate(&dt);
   printf("%d\%d\%d",dt.day,dt.mon,dt.year);
   return 0;
}
