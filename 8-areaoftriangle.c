/* if lenghts of three sides of a triangle are input through the keyboard, wap to find the area of triangle */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int side1, side2, side3, s, area;
    printf("\n enter the three sides of triangle :");
    scanf("%d,%d,%d", &side1, &side2, &side3);

    s=(side1+side2+side3)/2;
    area=sqrt(s*(s-side1)*(s-side2)*(s-side3));

    printf("\nArea of triangle is: %d",area);
}