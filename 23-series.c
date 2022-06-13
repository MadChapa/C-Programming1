//
#include<stdio.h>
int main()
{
    int i;
    float fact=1.0,sum=0,count;
    for ( i = 1; i<8; i++)
    {
        fact=fact*i;    //find fsct for 1 to 7
        count=i/fact;    //find the i factor of i
        sum=sum+count;
    }
    printf("\n Sum of the series up-to seven terms is:%f",sum); 

    return 0;
}