 // Odd loop using do-while loop
// #include<stdio.h>
// int main()
// {
//     int num;
//     char another;
//     do
//     {
//         printf("\n Enter a number:");
//         scanf("%d",&num);
//         printf("\n Square of %d is %d\n",num,num*num);
//         printf("\n Want to enter another number y/n:");
//         fflush(stdin);
//         scanf("%c",&another);
//     } while (another=='y');
//     return 0;
// }



// Odd loop using a for loop
#include<stdio.h>
int main()
{
    int num;
    char another='y';
    for (;another=='y';)
    {
        printf("\n Enter a number:");
        scanf("%d",&num);
        printf("\n Square of %d is: %d\n",num,num*num);
        printf("\n Want to enter another number y/n:");
        fflush(stdin);
        scanf("%c",&another);
    }
    return 0;
}



// odd loop using a while loop
// #include<stdio.h>
// int main()
// {
//     int num;
//     char another='y';  //while mah pahilai initialize garnu parxa so
//     while(another=='y') 
//     {
//         printf("\n Enter a number:");
//         scanf("%d",&num);
//         printf("\n Square of %d is: %d\n",num,num*num);
//         printf("\n Want to enter another number y/n:");
//         fflush(stdin);
//         scanf("%c",&another);
//     }
//     return 0;
// }