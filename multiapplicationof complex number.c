/*
https://youtu.be/NnkRPQepHIU

THAT IS A YIUTUBE VIDEO LINK FOR COMPLEX NUMBER
*/
#include<stdio.h>
struct comp
{
    double real;
    double img;
};
struct comp MULTI_comp(struct comp x,struct comp y);
void print_Comp(struct comp x);
int main()
{
    struct comp c1= {3,5};
    struct comp c2= {4,6};
    print_Comp(MULTI_comp(c1,c2));
    return 0;
}
struct comp MULTI_comp(struct comp x,struct comp y)
{
    struct comp ans;
    ans.real=(x.real*y.real)+(x.img*y.img)*(-1);
    ans.img=x.real*y.img+y.real*x.img;
    return ans;
}
void print_Comp(struct comp x)
{
    printf("%lf + %lf",x.real,x.img);
}
