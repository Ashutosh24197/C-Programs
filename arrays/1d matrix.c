#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[3],b[3],k;
    printf("Enter one dimensional array a: ");
    for (int i=0;i<3;i++)
        scanf("%d",&a[i]);
      printf("Enter one dimensional array b: ");
    for (int i=0;i<3;i++)
        scanf("%d",&b[i]);
        printf("Addition of the matrices : ");
        for (int i=0;i<3;i++)
            printf("%d ",a[i]+b[i]);
        printf("\nSubtraction of the matrices : ");
         for (int i=0;i<3;i++)
            printf("%d ",a[i]-b[i]);
             printf("\nMultiplication of the matrices : \n");
         for (int i=0;i<3;i++){
            for( k=0; k<3; k++)
            printf("%d ", a[i]*b[k]);
            printf("\n");}
            return 0;


}
