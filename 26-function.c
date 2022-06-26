// #include<stdio.h>
// int calsum(int x,int y,int z);
// int main()
// {
//     int a,b,c,sum;
//     printf("\n Enter three numbers:");
//     scanf("%d,%d,%d",&a,&b,&c);
//     sum=calsum(a,b,c);
//     printf("\n Sum is :%d",sum);
//     return 0;
// }
// int calsum(int x,int y,int z)
// {
//     int d;
//     d=x+y+z;
//     return(d);
// }


/*write a function to calculate the factorial value of any integer entered through the keyboard.*/

#include<stdio.h>
int factorial(int num);
int main()
{
    int n,fac;
    printf("\n Please enter the number:");
    scanf("%d",&n);
    fac=factorial(n);
    printf("\n Factorial of %d is %d ",n,fac);
    return 0;
}
int factorial(int num)
{
    int temp;
    temp=num;
    while (num>1)
    {
        temp=temp*(num-1);
        num=num-1;
    }
    return temp;
    
}

