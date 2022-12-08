#include<stdio.h>
struct point
{
    float x;
    float y;
};
struct point mid(struct point p,struct point q);
int main()
{
    struct point p1;
    struct point p2;
    p1.x=1;
    p1.y=1;
    p2.x=4;
    p2.y=5;
    struct point ans=mid(p1,p2);
    printf("%.2f %.2f",ans.x,ans.y);
    return 0;
}
struct point mid(struct point p,struct point q)
{
    struct point p3;
    p3.x=(p.x+q.x)/2;
    p3.y=(p.y+q.y)/2;
    return p3;
}
