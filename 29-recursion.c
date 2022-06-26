#include<stdio.h>
int rec(int);
int main()
{
    int num,fact;
    printf("\n Enter a number:");
    scanf("%d",&num);
    fact=rec(num);
    printf("\n Factorial of %d is: %d",num,fact);
    return 0;

}
int rec(int x)
{
    int f;
    if (x==1)
    { 
        return 1;   
    }
    else
    {
        f=x*rec(x-1);//  recursion (rec function bhitra feri rec lai nai call gareko xa)
        return f;
    }
    }
    