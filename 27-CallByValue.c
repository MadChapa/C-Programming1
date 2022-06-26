#include<stdio.h>
void swapv(int x, int y);
int main()
{
    int a=10, b=20;
    swapv(a,b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}
void swapv(int x, int y)// The value of a and b remain unchanged even after exchanging the value of x and y;
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d\n", x,y);
}