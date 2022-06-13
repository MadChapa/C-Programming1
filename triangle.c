#include<stdio.h>
//#include<conio.h>
int main()
{
  int b,h;
  printf("\nEnter the sides of triangle: ");
  scanf("%d,%d",&b,&h);
  int area;
  scanf("%d",&area);
  area=(b*h)/2;
  printf("\nArea of triangle is : %d",area);
  return 0;
}