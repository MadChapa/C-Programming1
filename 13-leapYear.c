/* A year is entered through the keyboard, wap to determine whether the year is leap or not. Use the logical 
   operator && and || . */

   

/*
 Leap Year Logic:

1. If a year is a century year(year ending with 00) and if it’s perfectly divisible by 400,
 then it’s a leap year.
2. If the given year is not a century year and it’s perfectly divisible by 4, then it’s a leap year.


Century year is determined by modulo division of the entered year by 100.
 Example: year%100 == 0. If its century year, it must also be perfectly divisible by 400. 
 i.e., year%400 == 0
(year%100 == 0 && year%400 == 0)

If the year is not century year, then it must be perfectly divisible by 4, for the year to be a leap year.
(year%100 != 0 && year%4 == 0)

      */


// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int year;

//     printf("\n Enter the Year:");
//     scanf("%d",&year);
//     if( (year%100 == 0 && year%400 == 0) || (year%100 != 0 && year%4   == 0)) 

//     {
//         printf("\n %d is a  Leap Year",year);
//     }
//     else
//     {
//         printf("\n %d is not a Leap Year",year);
//     }
//     return 0;


// }



// Same Question using Conditional operator

#include<stdio.h>
#include<conio.h>
int main()
{
    int year;

    printf("\n Enter the Year:");
    scanf("%d",&year);


    (year%100 == 0 && year%400 == 0)? printf("\n %d is a  Leap Year",year):
    (year%100 != 0 && year%4   == 0)? printf("\n %d is a  Leap Year",year):printf("\n %d is a common year");

    return 0;


}