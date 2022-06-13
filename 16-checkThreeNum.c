/* WAP to find the greatest of the three numbers entered through the keyboard.Use conditional operator. */

#include<stdio.h>
int main()
{
      int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", big) ;

    return 0;
}