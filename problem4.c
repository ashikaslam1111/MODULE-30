#include<stdio.h>
struct student
{
    int  roll;
    char name[50];
    double  mark;
};
void display(struct student x);
int main(void)
{
    int i;
    struct student cls[3];
    for(i=0; i<2; i++)
    {
        scanf("%d %s %lf",&cls[i].roll,cls[i].name,&cls[i].mark);
    }
    for(i=0; i<2; i++)
    {
        display(cls[i]);
    }
    return 0;
}
void display(struct student x)
{
    if(x.roll%2==0)
    {
        printf("%d %s %lf\n",x.roll,x.name,x.mark);
    }
}
