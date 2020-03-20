#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct rationalno add(struct rationalno a,struct rationalno b);
struct rationalno subtraction(struct rationalno a,struct rationalno b);
struct rationalno simplyfy(struct rationalno temp);
struct rationalno multiply(struct rationalno a,struct rationalno b);
struct rationalno devision(struct rationalno a,struct rationalno b);
int lcm(int n1,int n2);
struct rationalno{
int p,q;
};
int main()
{
    struct rationalno a,b,temp,sum,sub,product,dev;
    printf("Enter the first rational no in format p/q :");
    scanf("%d/%d",&a.p,&a.q);
    printf("Enter the second rational no in format p/q :");
    scanf("%d/%d",&b.p,&b.q);
    temp=add(a,b);
    sum=simplyfy(temp);
    printf("Sum of the rational no is %d/%d\n",sum.p,sum.q);
    temp=subtraction(a,b);
    sub=simplyfy(temp);
    printf("Subtraction of the rational no is %d/%d\n",sub.p,sub.q);
    temp=multiply(a,b);
    product=simplyfy(temp);
    printf("Multiplication of the rational no is %d/%d\n",product.p,product.q);
    temp=devision(a,b);
    dev=simplyfy(temp);
    printf("Multiplication of the rational no is %d/%d\n",dev.p,dev.q);
}
struct rationalno add(struct rationalno a,struct rationalno b)
{
    struct rationalno sum;
    sum.p=a.p+b.p;
    sum.q=lcm(a.q,b.q);
    return sum;

}
struct rationalno subtraction(struct rationalno a,struct rationalno b)
{
    struct rationalno sub;
    sub.p = a.p - b.p;
    sub.q = lcm(a.q,b.q);
    return sub;
}
int lcm(int n1,int n2)
{
    int lcm;
    lcm= n1>n2? n1:n2;
    while(1)
    {
        if(lcm%n1==0&&lcm%n2==0)
        {
            return lcm;
        }
        lcm++;
    }
}
struct rationalno simplyfy(struct rationalno temp)
{
    int i=2;
    while(1)
    {
        if(i>=temp.p||i>=temp.q)
        return temp;
        else if(temp.p%i==0&&temp.q%i==0)
        {
            temp.p/=i;
            temp.q/=i;
            i++;
        }
        else
            i++;
    }
}
struct rationalno multiply(struct rationalno a,struct rationalno b)
{
    struct rationalno product;
    product.p=a.p*b.p;
    product.q=a.q*b.q;
    return product;
}
struct rationalno devision(struct rationalno a,struct rationalno b)
{
    struct rationalno dev;
    dev.p=a.p*b.q;
    dev.q=a.q*b.p;
    return dev;
}
