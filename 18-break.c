/* wap to determine whether a number is prime or not. A prime number is said to be prime if it is divisible 
only by 1 or itself.
*/
#include<stdio.h>
int main()
{
    int num,i;
    printf("\n Enter a number\n");
    scanf("%d",&num);
    i=2;
    while (i<=num-1)
    {
        if (num%i==0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++;
        
    }
    if (i==num)
    {
        printf("prime number\n");
    }
    
    
}