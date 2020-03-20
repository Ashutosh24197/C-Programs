#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct complexno add(struct complexno a,struct complexno b);
struct complexno subtraction(struct complexno a,struct complexno b);
struct complexno multiply(struct complexno a,struct complexno b);
void devision(struct complexno a,struct complexno b);
struct complexno{
int p,q;
};
int main()
{
    struct complexno a,b,sum,sub,product,dev;
    printf("Enter the first complex no in format p + qi :");
    scanf("%d + %d i",&a.p,&a.q);
    printf("Enter the second complex no in format p + qi :");
    scanf("%d + %d i",&b.p,&b.q);
    sum=add(a,b);
    printf("Sum of the complex no is %d+(%d)i\n",sum.p,sum.q);
    sub=subtraction(a,b);
    printf("Subtraction of the complex no is %d+(%d)i\n",sub.p,sub.q);
    product=multiply(a,b);
    printf("Multiplication of the complex no is %d+(%d)i\n",product.p,product.q);
    devision(a,b);

}
struct complexno add(struct complexno a,struct complexno b)
{
    struct complexno sum;
    sum.p= a.p+b.p ;
    sum.q= a.q+b.q ;
    return sum;

}
struct complexno subtraction(struct complexno a,struct complexno b)
{
    struct complexno sub;
    sub.p = a.p - b.p;
    sub.q = a.q-b.q;
    return sub;
}
struct complexno multiply(struct complexno a,struct complexno b)
{
    struct complexno product;
    product.p = (a.p*b.p) - (a.q*b.q );
    product.q = (a.p*b.q) + (a.q*b.p);
    return product;
}
void devision(struct complexno a,struct complexno b)
{
    struct complexno dev;
    int temp=b.p*b.p + b.q*b.q;
    dev.p=(a.p*b.p + a.q*b.q);
    dev.q=(a.q*b.p - a.p*b.q);
        int i=2;
    while(1)
    {
        if(i>=temp||i>=dev.p)
        break;
        else if(temp%i==0&&dev.p%i==0)
        {
            temp/=i;
            dev.p/=i;
            i++;
        }
        else
            i++;
    }
     i=2;
    while(1)
    {
        if(i>=temp||i>=dev.q)
        break;
        else if(temp%i==0&&dev.q%i==0)
        {
            temp/=i;
            dev.q/=i;
            i++;
        }
        else
            i++;
    }
    printf("Devision of complex no is %d/%d + (%d/%d) i",dev.p,temp,dev.q,temp);
}
