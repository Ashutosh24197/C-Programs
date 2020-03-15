#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double distance (float,float,float,float);
void  main()
{
  double dis;
  float x1,x2,y1,y2;
  printf("Enter co_ordinate of one point:");
  scanf("%f%f",&x1,&y1);
  printf("Enter co_ordinate of second point:");
  scanf("%f%f",&x2,&y2);
  dis=distance (x1,y1,x2,y2);
  printf("Distance of two point is %f",dis);
}
 double distance (float  x1,float y1,float  x2,float y2)
{
    float temp;
    double temp2;
   temp=(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
   temp2=sqrt(temp);
   return (temp2);
}
