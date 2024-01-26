#include<stdio.h>
struct circle
{
    float x;
    float y;
    int r;
};


int main()
{
    struct circle c;
    c.x= 2.0;
    c.y= 3.0;
    c.r= 7;

    printf("The co ordinate of center of the circle is %.2f and %.2f \n", c.x, c.y);
    printf("The radius of circle is %d", c.r);

    return 0;
}
