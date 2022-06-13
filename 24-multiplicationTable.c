//wap to print the multiplication table of the number entered by the user.
#include<stdio.h>
int main()
{
    int i=1,num;
    printf("\n Enter a number:");
    scanf("%d",&num);
    printf("\n *** Multiplication table of entered number is ***\n");
    while (i!=11)
    {
        printf("\n %d*%d=%d\n",num,i,num*i);
        i++;
    }
    

    

}