//WAP to print all prime numbers from 1 to 300 (Hinit: Use nested loops, break and continue)
#include<stdio.h>
int main()
{
    int num, max=300,i,flag;
    for (num=1; num<=max; num++)  //loop to run a counter from 1 to 300
    {
        flag=0;
        for(i=2;i<=num/2;i++) // loop to check prime number 
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0 & num!=1) // we remove 1 from this condition
            printf("%d\t", num);
            
    }
    return 0;
        



}