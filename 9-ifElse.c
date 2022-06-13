/* while purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
if quantity and price per item are input through the keyboard , wap to calculate the total expenses */

#include<stdio.h>
#include<conio.h>
int main()
{
    int qty, dis;
    float rate, tot;

    printf("\n Enter the quantity and rate :");
    scanf("%d%f",&qty,&rate);

    if (qty>1000)
     dis=10;

    else
     dis=0;
     
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("\n Total expenses=RS %f",tot);
    return 0;
}