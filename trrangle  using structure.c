#include<stdio.h>
struct point
{
    float x;
    float y;
};
struct triangle
{
    struct point A;
    struct point B;
    struct point C;
};
struct point centroed(struct triangle t)
{
    struct point ans;
    ans.x=(t.A.x+t.B.x+t.C.x)/3;
    ans.y=(t.A.y+t.B.y+t.C.y)/3;

    return ans;
}
int main()
{
    struct point p1;
    struct point p2;
    struct point p3;
    p1.x=1;
    p1.y=1;
    p2.x=4;
    p2.y=5;
    p3.x=1;
    p3.y=5;
    struct triangle t= {p1,p2,p3};
    struct point c=centroed(t);
    printf("%.2f %.2f",c.x,c.y);
    return 0;
}

