// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int p,n,count;
//     float r,si;

//     count=1;

//     while (count<=3)
//     {
//         printf("\n Enter the principal,year and interest:");
//         scanf("%d%d%f",&p,&n,&r);
//         si=p*n*r/100;
//         printf("\n Simple interest=RS. %f",si);
//         count=count+1;
//     }
//     return 0;

// }


/* 2) wap to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs.12 per hour for 
      every hour worked above 40 hours.Assume that emplyoees do not work for fractional part of an hour. */

    //   #include<stdio.h>
    //   int main()
    //   {
    //    int count=1, work_hour, over_time;
    //    float over_time_pay;
    //    while (count<=10)
    //    {
    //        printf("\n Enter the working hours of emplyoee no %d:",count);
    //        scanf("%d",&work_hour);
    //        if (work_hour>40)
    //        {
    //            over_time=work_hour-40;
    //            over_time_pay=over_time*12;
    //            printf("Employee No %d overtime pay is %f\n", count, over_time_pay);

    //        }
    //        else{
    //             printf("You have to work for more than 40 hours to get over time pay\n");

    //        }
    //        count++;
           
    //    }
    //    return 0;
          
     // }


     /* wap to find the factorial value of any number entered through the keyboard */

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int num, fact,i;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     fact=i=1;
//     while (i<=num)
//     {
//         fact = fact*i;
//         i++;
//     }

//     printf("The Factorial for %d is %d", num, fact);
//     return 0;
// }


/* Write a c program for a matchstick game being played between the computer and a user. Your program should
 ensure that the computer always wins. Rules for the game are as follows:
There are 21 matchsticks.
The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
After the person picks, the customer does its picking.
Whoever is forced to pick up the last matchstick loses the game.
*/


/*logic vaneko maximum combination vaneko 5 ligni  so user and computer ko maximum combination vaneko 5 hunxa
like: user=4, comp=1;
       user=1,  comp=4;
       user=3,  comp=2;
       user=2,   comp=3;
          Total=20 bhayo euta ranxa 

*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int match_sticks = 21, user_choice, computer_choice;
    while(match_sticks>=1)
    {
        printf("Total Match Sticks: %d\n", match_sticks);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &user_choice);

        if(user_choice>4)
        {
            printf("Invalid Entry");
            break;
        }

        //for computer choice we are taking maximum value by which
        //we can get the max possible value of sticks which is 5

        computer_choice = 5 - user_choice;
        //with the help of this code we will take only 4 rounds to decide that user loses the match.
        printf("Computer picks up the %d match sticks.\n", computer_choice);
        match_sticks = match_sticks-user_choice-computer_choice;
        if(match_sticks==1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
    return(0);
}