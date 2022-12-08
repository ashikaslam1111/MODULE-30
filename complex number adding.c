#include<stdio.h>
struct comp
{
    double real;
    double img;
};
struct comp add_comp(struct comp x,struct comp y);
void print_Comp(struct comp x);
int main()
{
    struct comp c1= {3.11,5.77};
    struct comp c2= {4.11,6.77};
    print_Comp(add_comp(c1,c2));
    return 0;
}
struct comp add_comp(struct comp x,struct comp y)
{
    struct comp ans;
    ans.real=x.real+y.real;
    ans.img=x.img+y.img;
    return ans;
}


void print_Comp(struct comp x)
{
    printf("%lf + %lf",x.real,x.img);
}
