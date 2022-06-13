/* if the three sides of the triangle are entered through the keyboard, wap to check whether the triangle is
valid or not.The triangle is valid if the sum of two sides is greater than the largest of the three sides.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int side1,side2,side3,sum;
    printf("\n Enter the three sides of the triangle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    sum=side1+side2;
    if (sum>side3)
    {
        printf("\n Valid triangle");
    }
    else
    {
        printf("\n Invalid triangle");
    }
    return 0;
    
}