#include<stdio.h>
struct point
{
    int x;
    int y;
};
int distance(struct point p,struct point q);
int main()
{
    struct point p1;
    struct point p2;
    p1.x=1;
    p1.y=1;
    p2.x=4;
    p2.y=5;
    printf("%d",distance(p1,p2));
    return 0;
}
int distance(struct point p,struct point q)
{
    int d=abs((p.x-q.x)+(p.y-q.y));
    return d;
}
