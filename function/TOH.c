#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void TOH(int ,char ,char ,char );
int main()
{
   int no;
   printf("Enter no of disc: ");
   scanf("%d",&no);
   char a='A',b='B',c='C';
   TOH(no,a,b,c);
}

void TOH(int n,char big,char aux,char end)
{
    static int moves=0;
if(n>=1)
{
   TOH(n-1,big,end,aux) ;
   moves++;
   printf("MOVE %d:of dics %d :%c to %c\n",moves,n,big,end);
   TOH(n-1,aux,big,end);
}
return 0;

}
// conversion decimal to given base//
